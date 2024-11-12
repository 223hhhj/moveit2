import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import numpy as np
import cv2
from ultralytics import YOLO
from collections import deque
from geometry_msgs.msg import Point, Quaternion
from tf_transformations import quaternion_from_euler
from std_msgs.msg import Int8, String, Float32
from std_srvs.srv import Trigger
import json
import math

class RealSenseYOLO(Node):

    def __init__(self):
        super().__init__('realsense_yolo')
        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.listener_callback,
            10)
        
        self.publisher_ = self.create_publisher(Image, '/yolov8/output', 10)
        self.coordinate_publisher = self.create_publisher(Point, '/lego_coordinates', 10)
        self.orientation_publisher = self.create_publisher(Quaternion, '/lego_orientation', 10)
        self.face_publisher = self.create_publisher(Int8, '/lego_orientation_type', 10)
        self.detection_publisher = self.create_publisher(String, '/lego_detections', 10)
        self.angle_publisher = self.create_publisher(Float32, '/lego_rotation_angle', 10)
        self.br = CvBridge()
        self.yolo_model = YOLO('/home/steven/runs/obb/train30/weights/best.pt')
        self.orientation_model = YOLO('/home/steven/runs/obb/train25/weights/best.pt')
        self.current_model = self.yolo_model
        self.get_logger().info('RealSenseYOLO Node has been started')

        self.coordinates_history = deque(maxlen=30)
        self.orientation_history = deque(maxlen=30)
        self.face_history = deque(maxlen=30)
        self.calibration_matrix = np.array([
            [-3.71690267e-01, - 7.30432497e-03 , -0.00000000e+00, 5.94509007e+02],
            [-1.19197740e-02 ,3.72279890e-01 , -0.00000000e+00 , -7.63990957e+02],
            [1.30104261e-18 ,-3.25260652e-19 , -0.00000000e+00 , -2.29999995e+00],
            [ 0.          ,0.   ,       0.          ,1.        ]
        ])

#            [3.02911357e-01 ,-7.15101605e-03 , 0.00000000e+00, -3.84034382e+00],
  #          [-9.46142542e-03 ,-3.04081579e-01 , 0.00000000e+00 , 6.81698459e+02],
 #           [-2.77555756e-16 , 3.05311332e-16 , 0.00000000e+00 , 2.55000000e+02],
   #         [ 0.          ,0.   ,       0.          ,1.        ]

        self.need_orientation_detection = False
        self.orientation_detection_service = self.create_service(
            Trigger, 'trigger_orientation_detection', self.trigger_orientation_detection_callback)

    def get_lego_orientation_type(self, class_name):
        class_name_lower = class_name.lower()
        if 'front' in class_name_lower:
            return 0, 'Front'
        elif 'side_down' in class_name_lower:
            return 1, 'Side_Down'
        elif 'side_top' in class_name_lower:
            return 2, 'Side_Top'
        elif 'back' in class_name_lower:
            return 3, 'Back'
        else:
            return -1, 'Unknown'

    def get_bbox_coordinates_with_angle_and_face(self, results):
        bbox_data = []
        for result in results:
            obb = result.obb
            self.get_logger().info(f'obb content: {obb}')
            if obb is not None and len(obb.xyxyxyxyn) > 0:
                for i in range(len(obb.xyxyxyxyn)):
                    x_center = obb.xywhr[i, 0].item()
                    y_center = obb.xywhr[i, 1].item()
                    z = obb.xywhr[i, 2].item()
                    angle = obb.xywhr[i, 4].item()
                    cls = int(obb.cls[i].item())
                    conf = obb.conf[i].item()
                    class_name = result.names[cls]
                    face, orientation = self.get_lego_orientation_type(class_name)
                    self.get_logger().info(f'Detected class: {class_name}, Face orientation: {orientation}')
                    bbox_data.append((x_center, y_center, z, angle, face, conf, orientation, class_name))
        return bbox_data

    def angle_to_quaternion(self, angle):
        angle = np.clip(angle, 0, 180)
        direction = np.array([0, 0, -1])
        base_direction = np.array([0, 0, 1])
        rotation_axis = np.array([1, 0, 0])
        rotation_angle = np.radians(angle)
        rot_vector = rotation_axis * rotation_angle
        rotation = R.from_rotvec(rot_vector)
        base_to_fixed = R.from_rotvec(np.array([np.pi, 0, 0]))
        final_rotation = base_to_fixed * rotation
        return final_rotation.as_quat()

    def draw_grid(self, img, grid_size):
        h, w = img.shape[:2]
        for x in range(0, w, grid_size):
            cv2.line(img, (x, 0), (x, h), (0, 255, 0), 1)
        for y in range(0, h, grid_size):
            cv2.line(img, (0, y), (w, y), (0, 255, 0), 1)
        return img

    def listener_callback(self, data):
        self.get_logger().info('Receiving video frame')
        try:
            # 使用 CvBridge 將 ROS 圖像消息轉換為 OpenCV 格式
            current_frame = self.br.imgmsg_to_cv2(data, desired_encoding='bgr8')
            
            # 將 BGR 格式轉換為 RGB 格式進行 YOLO 處理
            rgb_frame = cv2.cvtColor(current_frame, cv2.COLOR_BGR2RGB)
            
            height, width, _ = rgb_frame.shape
            mask = np.zeros((height, width), dtype=np.uint8)
            cv2.rectangle(mask, (int(width * 0.0), int(height * 0.0)), (int(width * 1.0), int(height * 1.0)), 255, -1)
            masked_frame = cv2.bitwise_and(rgb_frame, rgb_frame, mask=mask)

            self.get_logger().info(f'Current model: {self.current_model}')
            results = self.current_model(masked_frame)
            self.get_logger().info(f'Detection results: {results}')
            
            try:
                # 對檢測結果進行可視化
                annotated_frame = results[0].plot()
                
                # 添加網格線
                # grid_size = min(annotated_frame.shape[:2]) // 40  # 將圖像分成20x20的網格
                # annotated_frame = self.draw_grid(annotated_frame, grid_size)
                
                # 將 RGB 格式轉回 BGR 格式以便發布
                annotated_frame_bgr = cv2.cvtColor(annotated_frame, cv2.COLOR_RGB2BGR)
                
                annotated_image_msg = self.br.cv2_to_imgmsg(annotated_frame_bgr, encoding="bgr8")
                self.publisher_.publish(annotated_image_msg)
                self.get_logger().info('Published annotated frame with grid')

                if self.current_model == self.yolo_model:
                    bbox_data = self.get_bbox_coordinates_with_angle_and_face(results)
                    self.process_yolo_results(bbox_data)
                elif self.current_model == self.orientation_model:
                    orientation_type = self.get_orientation_from_results(results)
                    self.process_orientation_results(orientation_type)
            except AttributeError as e:
                self.get_logger().error(f'Error processing results: {e}')
                self.get_logger().info(f'Result attributes: {dir(results[0])}')

        except Exception as e:
            self.get_logger().error(f'Error processing image: {str(e)}')

    def process_yolo_results(self, bbox_data):
        detections = []
        if bbox_data:
            # Sort bboxes by distance to (0,0)
            bbox_data.sort(key=lambda x: math.sqrt(x[0]**2 + x[1]**2))
            
            nearest_bbox = bbox_data[0]
            self.get_logger().info(f'Nearest Bbox data: {nearest_bbox}')
            self.coordinates_history.append(nearest_bbox[:3])
            self.orientation_history.append(nearest_bbox[3])
            self.face_history.append(nearest_bbox[4])

            if len(self.coordinates_history) == 10:
                self.publish_average_data()

            for bbox in bbox_data:
                detection = {
                    'class': bbox[7],
                    'orientation': bbox[6],
                    'confidence': round(bbox[5], 3),
                    'x': bbox[0],
                    'y': bbox[1],
                    'z': bbox[2],
                    'angle': bbox[3],
                    'distance_to_edge': math.sqrt(bbox[0]**2 + bbox[1]**2)
                }
                detections.append(detection)

        # Publish all detections, sorted by distance to edge
        detections.sort(key=lambda x: x['distance_to_edge'])
        detections_msg = String()
        detections_msg.data = json.dumps(detections)
        self.detection_publisher.publish(detections_msg)
        self.get_logger().info(f'Published detections: {detections_msg.data}')

    def publish_average_data(self):
        average_x = sum(coord[0] for coord in self.coordinates_history) / 10
        average_y = sum(coord[1] for coord in self.coordinates_history) / 10
        average_z = sum(coord[2] for coord in self.coordinates_history) / 10
        average_angle = sum(self.orientation_history) / 10

        point_cam = np.array([average_x, average_y, 0, 1])
        point_base = self.calibration_matrix @ point_cam
        x_base, y_base, z_base = point_base[:3]

        coordinate_msg = Point()
        coordinate_msg.x = -0.001*(float(x_base))
        coordinate_msg.y =-0.001*(float(y_base))
        coordinate_msg.z = float(z_base)

        self.coordinate_publisher.publish(coordinate_msg)
        self.get_logger().info(f'Published coordinates: x={coordinate_msg.x}, y={coordinate_msg.y}, z={coordinate_msg.z}')

        # Publish raw angle (radians)
        angle_msg = Float32()
        angle_msg.data = float(average_angle)
        self.angle_publisher.publish(angle_msg)
        self.get_logger().info(f'Published rotation angle: {angle_msg.data} radians')

        # Publish angle in degrees
        angle_degrees = math.degrees(average_angle)
        angle_msg_degrees = Float32()
        angle_msg_degrees.data = float(angle_degrees)
        self.angle_publisher.publish(angle_msg_degrees)
        self.get_logger().info(f'Published rotation angle: {angle_msg_degrees.data} degrees')

        # 調整角度並計算四元數
        adjusted_angle = average_angle + np.pi/2
        quat = quaternion_from_euler(0, 0, adjusted_angle)
        orientation_msg = Quaternion()
        orientation_msg.x = float(quat[2])
        orientation_msg.y = float(quat[3])
        orientation_msg.z = float(quat[1])
        orientation_msg.w = float(quat[0])

        self.orientation_publisher.publish(orientation_msg)
        self.get_logger().info(f'Published orientation: x={orientation_msg.x}, y={orientation_msg.y}, z={orientation_msg.z}, w={orientation_msg.w}')

        face_counts = {0: 0, 1: 0, 2: 0, 3: 0, -1: 0}
        for face in self.face_history:
            if face in face_counts:
                face_counts[face] += 1

        self.get_logger().info(f'Face counts: {face_counts}')
        most_common_face = max(face_counts, key=face_counts.get)
        face_msg = Int8()
        face_msg.data = most_common_face
        self.face_publisher.publish(face_msg)
        self.get_logger().info(f'Published face orientation: {most_common_face}')

        self.coordinates_history.clear()
        self.orientation_history.clear()
        self.face_history.clear()

    def get_orientation_from_results(self, results):
        self.get_logger().info(f'Orientation results: {results}')
        self.get_logger().info(f'Result attributes: {dir(results[0])}')
        if results and len(results) > 0 and hasattr(results[0], 'obb'):
            obb = results[0].obb
            if obb and hasattr(obb, 'cls') and len(obb.cls) > 0:
                orientation_type = int(obb.cls[0].item())
                return orientation_type
        return -1

    def process_orientation_results(self, orientation_type):
        face_msg = Int8()
        face_msg.data = orientation_type
        self.face_publisher.publish(face_msg)
        self.get_logger().info(f'Published orientation type: {orientation_type}')

    def trigger_orientation_detection_callback(self, request, response):
        self.need_orientation_detection = True
        self.current_model = self.orientation_model
        self.get_logger().info("Switched to orientation model")
        response.success = True
        response.message = "Orientation detection triggered"
        return response

def main(args=None):
    rclpy.init(args=args)
    realsense_yolo = RealSenseYOLO()
    rclpy.spin(realsense_yolo)
    realsense_yolo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()