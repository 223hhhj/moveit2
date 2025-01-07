import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class ContourDetectorNode(Node):
    def __init__(self):
        super().__init__('contour_detector_node')
        
        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.image_callback,
            10)
        self.bridge = CvBridge()
        self.selected_point = None
        self.calibration_matrix = np.array([
        [ 2.54807704e-01  ,1.01627900e-01 , 0.00000000e+00 , 3.41048288e+00],
        [-1.64201183e-01, -2.16124022e-01,  0.00000000e+00 , 7.82027952e+02],
        [ 0.00000000e+00 , 0.00000000e+00 , 0.00000000e+00  ,0.00000000e+00],
        [ 0.00000000e+00 , 0.00000000e+00 , 0.00000000e+00 , 1.00000000e+00]
        ])
    def apply_calibration(self, point):
        homogeneous_point = np.array([point[0], point[1], 0, 1])
        transformed_point = self.calibration_matrix @ homogeneous_point
        transformed_point /= transformed_point[3]
        return (int(transformed_point[0]), int(transformed_point[1]))

    def preprocess_image(self, image):
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        blurred = cv2.GaussianBlur(gray, (5, 5), 0)
        edges = cv2.Canny(blurred, 50, 150)
        
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
        processed = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel)
        
        return processed

    def detect_rectangles(self, image):
        contours, _ = cv2.findContours(image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        rectangles = []
        
        for contour in contours:
            epsilon = 0.04 * cv2.arcLength(contour, True)
            approx = cv2.approxPolyDP(contour, epsilon, True)
            
            if len(approx) == 4 and cv2.isContourConvex(approx):
                (x, y, w, h) = cv2.boundingRect(approx)
                aspect_ratio = float(w) / h
                
                if 0.9 < aspect_ratio < 1.1:
                    rectangles.append((approx, w, h, x, y))
        
        return rectangles

    def draw_grid(self, image, rect):
        pts = rect.reshape(4, 2)
        pts = pts[np.argsort(pts[:, 1])]
        top_pts = pts[:2]
        bottom_pts = pts[2:]

        top_pts = top_pts[np.argsort(top_pts[:, 0])]
        bottom_pts = bottom_pts[np.argsort(bottom_pts[:, 0])]

        top_left, top_right = top_pts
        bottom_left, bottom_right = bottom_pts

        center = (top_left + bottom_right) // 2

        for i in range(1, 32):
            start_v = (top_left[0] + (top_right[0] - top_left[0]) * i // 32,
                       top_left[1] + (top_right[1] - top_left[1]) * i // 32)
            end_v = (bottom_left[0] + (bottom_right[0] - bottom_left[0]) * i // 32,
                     bottom_left[1] + (bottom_right[1] - bottom_left[1]) * i // 32)

            start_h = (top_left[0] + (bottom_left[0] - top_left[0]) * i // 32,
                       top_left[1] + (bottom_left[1] - top_left[1]) * i // 32)
            end_h = (top_right[0] + (bottom_right[0] - top_right[0]) * i // 32,
                     top_right[1] + (bottom_right[1] - top_right[1]) * i // 32)

            cv2.line(image, start_v, end_v, (0, 255, 0), 1)
            cv2.line(image, start_h, end_h, (0, 255, 0), 1)
        # 座標轉換
        top_left_calibrated = self.apply_calibration(top_left)
        bottom_right_calibrated = self.apply_calibration(bottom_right)
        center_calibrated = self.apply_calibration(center)
        self.get_logger().info(f'左上角座標: {top_left_calibrated}, 右下角座標: {bottom_right_calibrated}')
        self.get_logger().info(f'矩形中心座標: {center_calibrated}')
        # 在 (0, 0) 畫箭頭
        arrow_start = self.map_grid_to_camera((0, 0), top_left, bottom_right)
        arrow_end_x = self.map_grid_to_camera((1, 0), top_left, bottom_right)
        arrow_end_y = self.map_grid_to_camera((0, 1), top_left, bottom_right)
        
        cv2.arrowedLine(image, arrow_start, arrow_end_x, (0, 0, 255), 2, tipLength=0.3)
        cv2.arrowedLine(image, arrow_start, arrow_end_y, (0, 0, 255), 2, tipLength=0.3)
        if self.selected_point:
            mapped_point = self.map_grid_to_camera(self.selected_point, top_left, bottom_right)
            cv2.circle(image, mapped_point, 5, (0, 0, 255), -1)
            self.get_logger().info(f'點 {self.selected_point} 在相機中的座標為: {mapped_point}')

    def map_grid_to_camera(self, point, top_left, bottom_right):
        grid_size = 32
        scale_x = (bottom_right[0] - top_left[0]) / grid_size
        scale_y = (bottom_right[1] - top_left[1]) / grid_size
        
        mapped_x = int(top_left[0] + point[0] * scale_x)
        mapped_y = int(top_left[1] + point[1] * scale_y)
        return (mapped_x, mapped_y)

    def image_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            processed_image = self.preprocess_image(cv_image)
            rectangles = self.detect_rectangles(processed_image)

            for rect, width, height, x, y in rectangles:
                cv2.drawContours(cv_image, [rect], 0, (0, 255, 0), 2)
                cv2.putText(cv_image, f'W: {width}px H: {height}px', 
                            (rect[0][0][0], rect[0][0][1] - 10),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0), 2)
                
                self.draw_grid(cv_image, rect)

            cv2.imshow("Original", cv_image)
            cv2.imshow("Processed", processed_image)
            key = cv2.waitKey(1)
            
            if key == 13:  # Enter鍵
                x = int(input("輸入 x 座標 (0-32): "))
                y = int(input("輸入 y 座標 (0-32): "))
                self.selected_point = (x, y)
            
        except Exception as e:
            self.get_logger().error(f'處理影像時發生錯誤: {str(e)}')


def main(args=None):
    rclpy.init(args=args)
    node = ContourDetectorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
