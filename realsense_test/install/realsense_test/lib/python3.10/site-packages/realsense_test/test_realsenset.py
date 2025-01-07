import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import numpy as np
from ultralytics import YOLO
from collections import deque
import time

class RealSenseYOLO(Node):

    def __init__(self):
        super().__init__('realsense_test')
        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',  # 使用正确的 topic 名称
            self.listener_callback,
            10)
        self.publisher_ = self.create_publisher(Image, '/yolov8/output', 10)  # 发布 Image 消息
        self.coordinate_publisher = self.create_publisher(String, '/lego_coordinates', 10)  # 发布乐高坐标消息
        self.br = CvBridge()
        self.yolo_model = YOLO('/home/steven/runs/obb/train5/weights/best.pt')  # 更新为您的模型路径
        self.get_logger().info('RealSense YOLO Node has been started')

        self.coordinates_history = deque()  # 用于存储过去三秒的坐标和时间戳

    def calculate_rotation_angle(self, x1, y1, x2, y2):
        delta_x = x2 - x1
        delta_y = y2 - y1
        angle = np.arctan2(delta_x, delta_y) * 180 / np.pi
        # 确保角度在 -90 度到 +90 度之间
        if angle > 90:
            angle -= 180
        elif angle < -90:
            angle += 180
        return angle

    def get_bbox_coordinates_with_angle(self, results):
        bbox_data = []
        for result in results:
            obb = result.obb
            self.get_logger().info(f'obb content: {obb}')
            if obb and obb.xyxy.size(0) > 0:  # 检查 obb 是否存在并且大小合适
                for i in range(obb.xyxy.size(0)):
                    x_center = obb.xywhr[i, 0].item()
                    y_center = obb.xywhr[i, 1].item()
                    x1, y1, x2, y2 = obb.xyxyxyxy[i].flatten().tolist()[:4]
                    rz = self.calculate_rotation_angle(x1, y1, x2, y2)
                    bbox_data.append((x_center, y_center, rz))
        return bbox_data

    def listener_callback(self, data):
        self.get_logger().info('Receiving video frame')
        try:
            current_frame = self.br.imgmsg_to_cv2(data)
            results = self.yolo_model(current_frame)
            self.get_logger().info(f'Detection results: {results}')
            annotated_frame = results[0].plot()  # 用结果标注帧
            annotated_image_msg = self.br.cv2_to_imgmsg(annotated_frame, encoding='bgr8')
            self.publisher_.publish(annotated_image_msg)
            self.get_logger().info('Published annotated frame')

            bbox_data = self.get_bbox_coordinates_with_angle(results)
            if bbox_data:  # 检查是否有检测到的物体
                # 根据距离左上角的距离排序
                bbox_data.sort(key=lambda x: x[0]**2 + x[1]**2)
                nearest_bbox = bbox_data[0]
                self.get_logger().info(f'Nearest Bbox data: {nearest_bbox}')
                self.add_coordinate_to_history(nearest_bbox)
                average_x, average_y, average_rz = self.calculate_average_coordinates()
                coordinate_msg = String()
                coordinate_msg.data = f"x: {average_x}, y: {average_y}, rz: {average_rz}"
                self.coordinate_publisher.publish(coordinate_msg)
                self.get_logger().info(f'Published coordinates: {coordinate_msg.data}')
            else:
                self.get_logger().info('No objects detected')
        except Exception as e:
            self.get_logger().error(f'Error processing image: {e}')

    def add_coordinate_to_history(self, coordinate):
        current_time = time.time()
        self.coordinates_history.append((coordinate, current_time))
        # 移除超过三秒的坐标
        while self.coordinates_history and current_time - self.coordinates_history[0][1] > 3:
            self.coordinates_history.popleft()

    def calculate_average_coordinates(self):
        current_time = time.time()
        recent_coordinates = [coord for coord, timestamp in self.coordinates_history if current_time - timestamp <= 2]
        if not recent_coordinates:
            return 0, 0, 0
        x_sum = sum(coord[0] for coord in recent_coordinates)
        y_sum = sum(coord[1] for coord in recent_coordinates)
        rz_sum = sum(coord[2] for coord in recent_coordinates)
        count = len(recent_coordinates)
        return x_sum / count, y_sum / count, rz_sum / count

def main(args=None):
    rclpy.init(args=args)
    realsense_yolo = RealSenseYOLO()
    rclpy.spin(realsense_yolo)
    realsense_yolo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()