import rclpy
import time
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from geometry_msgs.msg import Pose
from cv_bridge import CvBridge
import pyzed.sl as sl
import cv2
import numpy as np
import apriltag
from scipy.spatial.transform import Rotation as R

class ZedCameraNode(Node):
    def __init__(self):
        super().__init__('zed_camera_node')
        self.depth_publisher = self.create_publisher(Image, 'zed_camera/image_depth', 10000)
        self.right_publisher = self.create_publisher(Image, 'zed_camera/image_right', 10000)
        self.left_publisher = self.create_publisher(Image, 'zed_camera/image_left', 10000)
        self.pose_publisher = self.create_publisher(Pose, 'zed_camera/pose_average', 10000)
        self.record_subscriber = self.create_subscription(String, 'zed_camera/record', self.record_callback, 10000)

        self.timer = self.create_timer(0.001, self.timer_callback)
        self.bridge = CvBridge()
        self.positions = []
        self.timestamps = []

        init_parameters = sl.InitParameters()
        init_parameters.sdk_verbose = 10
        init_parameters.set_from_stream("192.168.1.2", 30000)
        init_parameters.camera_resolution = sl.RESOLUTION.HD1200
        init_parameters.camera_fps = 60
        init_parameters.depth_mode = sl.DEPTH_MODE.NEURAL
        init_parameters.coordinate_units = sl.UNIT.METER
        init_parameters.depth_minimum_distance = 0.1
        init_parameters.depth_maximum_distance = 1.5
        init_parameters.depth_stabilization = 100 
        runtime_parameters = sl.RuntimeParameters()
        runtime_parameters.enable_fill_mode = False
        runtime_parameters.confidence_threshold = 99

        self.cam = sl.Camera()
        status = self.cam.open(init_parameters)
        if status != sl.ERROR_CODE.SUCCESS:
            self.get_logger().error("Camera Open: " + repr(status) + ". Exit program.")
            rclpy.shutdown()
            return
        
        self.cam.set_camera_settings(sl.VIDEO_SETTINGS.SHARPNESS, 7) #影像銳利化（0～8）
        self.runtime = sl.RuntimeParameters()
        self.mat_depth = sl.Mat()
        self.mat_right = sl.Mat()
        self.mat_left = sl.Mat()

        fx = 735.763
        fy = 735.431
        cx = 943.174
        cy = 558.866
        k1 =  0
        k2 =  0
        p1 =  0
        p2 =  0
        k3 =  0
        self.camera_matrix = np.array([[fx, 0, cx],
                                       [0, fy, cy],
                                       [0, 0, 1]], dtype=np.float32)
        self.dist_coeffs = np.array([[k1], [k2], [p1], [p2], [k3]], dtype=np.float32)

    def record_callback(self, msg):
        current_time = time.time()
        recent_positions = [pos for pos, timestamp in zip(self.positions, self.timestamps) if current_time - timestamp <= 2.0]
        if recent_positions:
            avg_position = np.mean(recent_positions, axis=0)
            pose_msg = Pose()
            pose_msg.position.x = avg_position[0]
            pose_msg.position.y = avg_position[1]
            pose_msg.position.z = avg_position[2]
            pose_msg.orientation.x = avg_position[3]
            pose_msg.orientation.y = avg_position[4]
            pose_msg.orientation.z = avg_position[5]
            pose_msg.orientation.w = avg_position[6]
            self.pose_publisher.publish(pose_msg)
            self.get_logger().info("Published averaged pose")
        
    def timer_callback(self):
        try:
            if self.cam.grab(self.runtime) == sl.ERROR_CODE.SUCCESS:
                self.cam.retrieve_image(self.mat_depth, sl.VIEW.DEPTH)
                image_np_depth = self.mat_depth.get_data()
                image_np_depth = cv2.cvtColor(image_np_depth, cv2.COLOR_BGRA2BGR)
                msg_depth = self.bridge.cv2_to_imgmsg(image_np_depth, "bgr8")
                self.depth_publisher.publish(msg_depth)
                
                self.cam.retrieve_image(self.mat_left, sl.VIEW.LEFT)
                image_np_left = self.mat_left.get_data()
                image_np_left = cv2.cvtColor(image_np_left, cv2.COLOR_BGRA2BGR)
                msg_left = self.bridge.cv2_to_imgmsg(image_np_left, "bgr8")
                self.left_publisher.publish(msg_left)

                self.detector = apriltag.Detector()
                gray = cv2.cvtColor(image_np_left, cv2.COLOR_BGR2GRAY)
                detections = self.detector.detect(gray)
                tag_size = 0.08

                if detections:
                    for detection in detections:
                        corners = np.array(detection.corners, dtype=np.float32)
                        corners = corners.reshape(-1, 1, 2)

                        if np.all((corners >= 0) & (corners[:, :, 0] < gray.shape[1]) & (corners[:, :, 1] < gray.shape[0])):
                            criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 1000, 0.001)
                            cv2.cornerSubPix(gray, corners, (5, 5), (-1, -1), criteria)

                            object_points = np.array([
                                [-tag_size / 2, -tag_size / 2, 0],
                                [tag_size / 2, -tag_size / 2, 0],
                                [tag_size / 2, tag_size / 2, 0],
                                [-tag_size / 2, tag_size / 2, 0]
                            ])
                            retval, rvec, tvec = cv2.solvePnP(object_points, corners, self.camera_matrix, self.dist_coeffs, flags=cv2.SOLVEPNP_ITERATIVE)
                            
                            if retval:
                                print(f'Tag ID: {detection.tag_id}')

                                rotation_matrix, _ = cv2.Rodrigues(rvec)
                                rotation = R.from_matrix(rotation_matrix)
                                quaternion = rotation.as_quat()

                                print(f'Translation (x, y, z): {tvec[0][0]}, {tvec[1][0]}, {tvec[2][0]}')
                                print(f'Quaternion (wx, wy, wz, w): {quaternion[0]}, {quaternion[1]}, {quaternion[2]}, {quaternion[3]}')

                                position = [tvec[0][0], tvec[1][0], tvec[2][0], quaternion[0], quaternion[1], quaternion[2], quaternion[3]]
                                self.positions.append(position)
                                self.timestamps.append(time.time())

                                while self.timestamps and time.time() - self.timestamps[0] > 2.0:
                                    self.positions.pop(0)
                                    self.timestamps.pop(0)
                        else:
                            self.get_logger().info("Detected corners are out of bounds.")
                else:
                    self.get_logger().info("No AprilTags detected.") 
            else:
                self.get_logger().error("Error during capture")
        except Exception as e:
            self.get_logger().error(f"An error occurred: {str(e)}")
        
    def __del__(self):
        self.cam.close()

def main(args=None):
    rclpy.init(args=args)
    node = ZedCameraNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
