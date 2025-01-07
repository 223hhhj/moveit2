#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point
from cv_bridge import CvBridge
from geometry_msgs.msg import Quaternion
import cv2
import numpy as np
import random


class ParticleFilter:
    def __init__(self, num_particles=100, init_range=(0, 1280, 0, 720)):
        """
        初始化粒子濾波器。
        :param num_particles: 粒子數量
        :param init_range: 初始範圍 (x_min, x_max, y_min, y_max)
        """
        self.num_particles = num_particles
        x_min, x_max, y_min, y_max = init_range
        
        # 初始化粒子集合 (x, y, weight)
        self.particles = np.array([
            [random.uniform(x_min, x_max), random.uniform(y_min, y_max), 1.0 / num_particles]
            for _ in range(num_particles)
        ])

    def predict(self, motion=(0, 0), noise_std=(10, 10)):
        """
        預測粒子位置。
        :param motion: 運動向量 (dx, dy)
        :param noise_std: 噪聲標準差 (x_noise, y_noise)
        """
        dx, dy = motion
        x_noise, y_noise = noise_std
        
        for i in range(self.num_particles):
            self.particles[i, 0] += dx + np.random.normal(0, x_noise)  # x座標預測
            self.particles[i, 1] += dy + np.random.normal(0, y_noise)  # y座標預測

    def update(self, measurement, measurement_noise=20):
        """
        更新粒子權重，根據觀測量 (blob中心)。
        :param measurement: 觀測到的 blob 座標 (x, y)
        :param measurement_noise: 測量噪聲標準差
        """
        if measurement is None:
            return  # 無觀測量時不更新

        x_meas, y_meas = measurement
        total_weight = 0.0

        for i in range(self.num_particles):
            # 計算粒子與觀測量的距離
            distance = np.sqrt((self.particles[i, 0] - x_meas) ** 2 + (self.particles[i, 1] - y_meas) ** 2)
            # 高斯分佈權重計算
            self.particles[i, 2] = np.exp(- (distance ** 2) / (2 * measurement_noise ** 2))
            total_weight += self.particles[i, 2]

        # 正規化權重
        if total_weight > 0:
            self.particles[:, 2] /= total_weight

    def resample(self):
        """
        根據粒子權重進行重採樣。
        """
        weights = self.particles[:, 2]
        indices = np.random.choice(range(self.num_particles), size=self.num_particles, p=weights)
        self.particles = self.particles[indices]
        self.particles[:, 2] = 1.0 / self.num_particles  # 重設權重

    def get_estimate(self):
        """
        計算粒子的加權平均作為估計結果。
        :return: (x, y) 估計座標
        """
        x_estimate = np.sum(self.particles[:, 0] * self.particles[:, 2])
        y_estimate = np.sum(self.particles[:, 1] * self.particles[:, 2])
        return int(x_estimate), int(y_estimate)


class BlobDetectorNode(Node):
    def __init__(self):
        super().__init__('blob_detector_node')
        
        # 訂閱彩色影像
        self.color_subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw', 
            self.image_callback,
            10)
            
        # 訂閱深度影像
        self.depth_subscription = self.create_subscription(
            Image,
            '/camera/camera/depth/image_rect_raw',
            self.depth_callback,
            10)
        
        # 位置發布器
        self.position_publisher = self.create_publisher(
            Quaternion, '/circle_position', 10)
            
        self.bridge = CvBridge()
        self.depth_image = None
        
        # Blob 檢測器參數
        self.params = cv2.SimpleBlobDetector_Params()
        self.params.minThreshold = 50
        self.params.maxThreshold = 255
        self.params.thresholdStep = 10
        
        self.params.filterByArea = True
        self.params.minArea = 1000
        self.params.maxArea = 2500000
        
        self.params.filterByCircularity = True
        self.params.minCircularity = 0.1
        
        self.params.filterByConvexity = True
        self.params.minConvexity = 0.2
        
        self.params.filterByInertia = True
        self.params.minInertiaRatio = 0.2
        
        self.params.blobColor = 0
        self.detector = cv2.SimpleBlobDetector_create(self.params)
        
        # 初始化粒子濾波器
        self.particle_filter = ParticleFilter(num_particles=500)

        # 座標轉換矩陣
        self.calibration_matrix = np.array([
            [ 1.0,  0.0,  0.0,  0.0],
            [ 0.0,  1.0,  0.0,  0.0],
            [ 0.0,  0.0,  1.0,  0.0],
            [ 0.0,  0.0,  0.0,  1.0]
        ])

            #[-3.03147140e-04,   1.79143193e-06,  0.0,  4.83520689e-01],
            #[ 3.39235966e-06,  3.03529996e-04,  0.0, -7.46253707e-01],
            #[ 0.00000000,  0.00000000,  0.0,  0.00000000],
            #[ 0.00000000,  0.00000000,  0.0,  1.00000000]
# 241.32-347+176.3+182=70.62+182
    def transform_coordinates(self, x, y):
        # 創建齊次座標
        point_cam = np.array([x, y, 0, 1])
        
        # 執行轉換
        transformed = np.zeros(4)
        for i in range(4):
            transformed[i] = np.dot(self.calibration_matrix[i], point_cam)
        
        # 返回轉換後的座標
        return transformed[0], transformed[1], transformed[2]

    def publish_position(self, x, y, diameter):
        # 獲取深度值
        depth = self.get_depth(x, y)
        if depth is None:
            depth = 0.0
            
        # 轉換座標
        x_transformed, y_transformed, _ = self.transform_coordinates(x, y)
        
        # 使用 Quaternion 發布位置和狀態
        msg = Quaternion()
        msg.x = float(x_transformed)
        msg.y = float(y_transformed)
        msg.z = float(depth)
        msg.w = 1.0  # 使用 w 欄位表示偵測狀態 (1.0 = 有偵測到目標)
        
        self.position_publisher.publish(msg)
        self.get_logger().info(f'Published position and status: ({msg.x}, {msg.y}, {msg.z}, {msg.w})')

    def depth_callback(self, msg):
        """
        處理深度影像的回調函數
        """
        try:
            self.depth_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='passthrough')
        except Exception as e:
            self.get_logger().error(f'深度影像轉換錯誤: {str(e)}')

    def get_depth(self, x, y):
        """
        獲取指定像素位置的深度值
        """
        if self.depth_image is None:
            return None
        
        if 0 <= x < self.depth_image.shape[1] and 0 <= y < self.depth_image.shape[0]:
            depth = self.depth_image[y, x]
            
            if depth == 0:
                return None
                
            depth_meters = depth / 1000.0
            return depth_meters
        return None

    def preprocess_image(self, image):
        """
        基於邊緣的圖像分割預處理
        """
        def detect_edges(image):
            gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            blurred = cv2.GaussianBlur(gray, (5, 5), 0)
            edges = cv2.Canny(blurred, 50, 150)
            return edges

        def link_edges(edges):
            kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (3, 3))
            connected_edges = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel)
            return connected_edges

        edge_image = detect_edges(image)
        result = link_edges(edge_image)
        return result

    def image_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            processed_image = self.preprocess_image(cv_image)
            keypoints = self.detector.detect(processed_image)

            # 如果沒有檢測到目標，發布狀態為0
            if not keypoints:
                msg = Quaternion()
                msg.x = 0.0
                msg.y = 0.0
                msg.z = 0.0
                msg.w = 0.0  # 無目標
                self.position_publisher.publish(msg)
                self.get_logger().info('No target detected: (0.0, 0.0, 0.0, 0.0)')

            # 繪製檢測到的 blob
            for keypoint in keypoints:
                x, y = int(keypoint.pt[0]), int(keypoint.pt[1])
                radius = int(keypoint.size / 2)
                cv2.circle(cv_image, (x, y), radius, (0, 0, 255), 2)
                self.publish_position(x, y, keypoint.size)

            # 取得 blob 的觀測座標
            if keypoints:
                x_meas = int(keypoints[0].pt[0])
                y_meas = int(keypoints[0].pt[1])
                measurement = (x_meas, y_meas)
                self.particle_filter.update(measurement)
                self.particle_filter.resample()
            else:
                measurement = None

            # 預測粒子運動
            self.particle_filter.predict(motion=(0, 0))

            # 繪製粒子與估計結果
            for particle in self.particle_filter.particles:
                x, y = int(particle[0]), int(particle[1])
                cv2.circle(cv_image, (x, y), 1, (255, 0, 0), -1)
            
            x_est, y_est = self.particle_filter.get_estimate()
            depth = self.get_depth(x_est, y_est)
            
            cv2.circle(cv_image, (x_est, y_est), 10, (0, 255, 0), 2)
            
            coord_text = f'Est: ({x_est}, {y_est})'
            if depth is not None:
                depth_text = f'Depth: {depth:.3f}m'
            else:
                depth_text = 'Depth: N/A'
                
            cv2.putText(cv_image, coord_text, (x_est + 10, y_est),
                       cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
            cv2.putText(cv_image, depth_text, (x_est + 10, y_est + 20),
                       cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

            # 顯示圖像
            cv2.imshow("Original", cv_image)
            cv2.imshow("Processed", processed_image)
            if self.depth_image is not None:
                depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(self.depth_image, alpha=0.03), cv2.COLORMAP_JET)
                cv2.imshow("Depth", depth_colormap)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f'Error: {str(e)}')

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