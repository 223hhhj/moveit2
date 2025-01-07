#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class BlobDetectorNode(Node):
    def __init__(self):
        super().__init__('blob_detector_node')
        
        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.image_callback,
            10)
        self.bridge = CvBridge()
        
        # 設置blob檢測器參數
        self.params = cv2.SimpleBlobDetector_Params()
        
        # 調整閾值參數
        self.params.minThreshold = 50
        self.params.maxThreshold = 255
        self.params.thresholdStep = 10
        
        # 面積過濾
        self.params.filterByArea = True
        self.params.minArea = 1000
        self.params.maxArea = 2500000
        
        # 圓形度過濾
        self.params.filterByCircularity = True
        self.params.minCircularity = 0.1
        
        # 凸性過濾
        self.params.filterByConvexity = True
        self.params.minConvexity = 0.2
        
        # 慣性比過濾
        self.params.filterByInertia = True
        self.params.minInertiaRatio = 0.2

        self.params.blobColor = 0
        
        # 創建檢測器
        self.detector = cv2.SimpleBlobDetector_create(self.params)

    def preprocess_image(self, image):
        """
        基於邊緣的圖像分割預處理
        步驟1：邊緣檢測
        步驟2：邊緣連接
        """
        # 步驟1：邊緣檢測 (Edge Detection)
        def detect_edges(image):
            # 轉換為灰度圖
            gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            
            # 使用高斯模糊減少噪聲
            blurred = cv2.GaussianBlur(gray, (5, 5), 0)
            
            # 使用Canny邊緣檢測
            edges = cv2.Canny(blurred, 50, 150)
            
            return edges

        # 步驟2：邊緣連接 (Edge Linking)
        def link_edges(edges):
            # 定義形態學操作的核
            kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (3, 3))
            
            # 執行形態學操作來連接邊緣
            connected_edges = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel)
            
            return connected_edges

        # 執行邊緣檢測
        edge_image = detect_edges(image)
        
        # 執行邊緣連接
        result = link_edges(edge_image)
        
        return result


    def image_callback(self, msg):
        try:
            # 將ROS影像訊息轉換為OpenCV格式
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # 預處理影像
            processed_image = self.preprocess_image(cv_image)
            
            # 檢測圓形
            keypoints = self.detector.detect(processed_image)
            
            # 圖像左上角設為中心
            center_x = 0
            center_y = 0
            
            # 在原始圖像上繪製檢測結果
            result_image = cv2.drawKeypoints(cv_image, keypoints, np.array([]), 
                                            (0, 0, 255),
                                            cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)
            
            # 在左上角標記中心 (畫十字)
            cv2.line(result_image, (center_x - 10, center_y), (center_x + 10, center_y), (255, 0, 0), 2)
            cv2.line(result_image, (center_x, center_y - 10), (center_x, center_y + 10), (255, 0, 0), 2)
            
            # 顯示每個檢測到的圓形的資訊並標記ID
            for i, keypoint in enumerate(keypoints):
                # 獲取圓心座標
                x = int(keypoint.pt[0])
                y = int(keypoint.pt[1])
                
                # 計算相對於左上角中心的座標
                relative_x = x - center_x
                relative_y = center_y - y  # 注意：y軸要反轉，向上為正
                
                # 在圓形旁邊標記ID和座標
                text = f'ID:{i} ({relative_x},{relative_y})'
                cv2.putText(result_image, text, (x + 10, y), 
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
                
                # 在圓中心畫十字標記
                cv2.line(result_image, (x - 10, y), (x + 10, y), (0, 255, 0), 2)
                cv2.line(result_image, (x, y - 10), (x, y + 10), (0, 255, 0), 2)
                
                # 輸出日誌
                self.get_logger().info(f'Blob {i}: 中心座標=({relative_x},{relative_y}), 直徑={int(keypoint.size)}')
            
            # 顯示影像
            cv2.imshow("Original", cv_image)
            cv2.imshow("Processed", processed_image)
            cv2.imshow("Result", result_image)
            cv2.waitKey(1)
            
        except Exception as e:
            self.get_logger().error(f'處理影像時發生錯誤: {str(e)}')


def main(args=None):
    rclpy.init(args=args)
    node = BlobDetectorNode()
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
