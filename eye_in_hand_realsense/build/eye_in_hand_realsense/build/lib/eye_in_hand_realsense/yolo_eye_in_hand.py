import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from ultralytics import YOLO

class RealSenseYOLO(Node):
    def __init__(self):
        super().__init__('realsense_yolo')
        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.listener_callback,
            10)
        self.publisher_ = self.create_publisher(Image, '/eye_in_hand/output', 10)
        self.br = CvBridge()
        self.yolo_model = YOLO('/home/steven/runs/obb/train25/weights/best.pt')
        self.get_logger().info('RealSense YOLO Node has been started')

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
            current_frame = self.br.imgmsg_to_cv2(data, desired_encoding='bgr8')
            current_frame = cv2.cvtColor(current_frame, cv2.COLOR_BGR2RGB)
            
            results = self.yolo_model(current_frame)
            self.get_logger().info(f'Detection results: {results}')
            
            annotated_frame = results[0].plot()
            annotated_frame = cv2.cvtColor(annotated_frame, cv2.COLOR_RGB2BGR)
            
            # 添加網格線
            grid_size = min(annotated_frame.shape[:2]) // 40  # 將圖像分成20x20的網格
            annotated_frame = self.draw_grid(annotated_frame, grid_size)
            
            annotated_image_msg = self.br.cv2_to_imgmsg(annotated_frame, encoding='bgr8')
            self.publisher_.publish(annotated_image_msg)
            self.get_logger().info('Published annotated frame with grid')
        except Exception as e:
            self.get_logger().error(f'Error processing image: {e}')

def main(args=None):
    rclpy.init(args=args)
    realsense_yolo = RealSenseYOLO()
    rclpy.spin(realsense_yolo)
    realsense_yolo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()