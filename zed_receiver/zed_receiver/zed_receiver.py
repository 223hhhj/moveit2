import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ZEDReceiver(Node):

    def __init__(self):
        super().__init__('zed_receiver')
        self.subscription = self.create_subscription(
            Image,
            '/zed_camera/image/left',  # 接收影像的話題
            self.listener_callback,
            10)
        self.br = CvBridge()
        self.get_logger().info('ZED Receiver Node has been started')

    def listener_callback(self, data):
        self.get_logger().info('Receiving video frame')
        current_frame = self.br.imgmsg_to_cv2(data)
        cv2.imshow("ZED Camera", current_frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    zed_receiver = ZEDReceiver()
    rclpy.spin(zed_receiver)
    zed_receiver.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
