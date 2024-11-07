import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
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

        self.timer = self.create_timer(0.001, self.timer_callback)
        self.bridge = CvBridge()

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
        runtime_parameters =sl.RuntimeParameters()
        runtime_parameters.enable_fill_mode = False
        runtime_parameters.confidence_threshold = 99

        self.cam = sl.Camera()
        status = self.cam.open(init_parameters)
        if status != sl.ERROR_CODE.SUCCESS:
            self.get_logger().error("Camera Open: " + repr(status) + ". Exit program.")
            rclpy.shutdown()
            return
        
        self.cam.set_camera_settings(sl.VIDEO_SETTINGS.SHARPNESS, 8) #影像銳利化（0～8）

        self.runtime = sl.RuntimeParameters()
        self.mat_depth = sl.Mat()
        self.mat_right = sl.Mat()
        self.mat_left = sl.Mat()

        #######################################

        
        fx = 742.2367745196357
        fy = 742.7411299854638
        cx = 753.7229273586610
        cy = 463.7530332348389
        k1 =  0.005555497981291
        k2 =  -0.002045467430630
        p1 =  0
        p2 =  0
        k3 =  0
        self.camera_matrix = np.array([[fx, 0, cx],
                                       [0, fy, cy],
                                       [0, 0, 1]], dtype=np.float32)
        self.dist_coeffs = np.array([[k1], [k2], [p1], [p2], [k3]], dtype=np.float32)
        
        #############################################
        ###########################################

    def crop_image(self, image, crop_length):
        height, width = image.shape[:2]
        cropped_image = image[crop_length:height-crop_length, crop_length:width-crop_length]
        return cropped_image
        
    def timer_callback(self):
        if self.cam.grab(self.runtime) == sl.ERROR_CODE.SUCCESS:
            
            # Retrieve depth image
            self.cam.retrieve_image(self.mat_depth, sl.VIEW.DEPTH)
            image_np_depth = self.mat_depth.get_data()
            image_np_depth = cv2.cvtColor(image_np_depth, cv2.COLOR_BGRA2BGR)

            cropped_depth= image_np_depth[100:1100,200:1720]
            h, w = cropped_depth.shape[:2]
            new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(self.camera_matrix, self.dist_coeffs, (w, h), 1, (w, h))
            undistorted_depth = cv2.undistort(cropped_depth, self.camera_matrix, self.dist_coeffs, None, new_camera_matrix)

            msg_depth = self.bridge.cv2_to_imgmsg(undistorted_depth, "bgr8")
            self.depth_publisher.publish(msg_depth)

            # Retrieve left image
            self.cam.retrieve_image(self.mat_left, sl.VIEW.LEFT)
            image_np_left = self.mat_left.get_data()
            image_np_left = cv2.cvtColor(image_np_left, cv2.COLOR_BGRA2BGR)
            
            
            cropped_left = image_np_left[100:1100,200:1720]
            h, w = cropped_left.shape[:2]
            new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(self.camera_matrix, self.dist_coeffs, (w, h), 1, (w, h))
            undistorted_left = cv2.undistort(cropped_left, self.camera_matrix, self.dist_coeffs, None, new_camera_matrix)
            
            msg_left = self.bridge.cv2_to_imgmsg(undistorted_left, "bgr8")
            self.left_publisher.publish(msg_left)
        

            #############################################
            
            self.detector = apriltag.Detector()
            gray = cv2.cvtColor(undistorted_left, cv2.COLOR_BGR2GRAY)
            detections = self.detector.detect(gray)
            tag_size = 0.08

            if detections:
                for detection in detections:
                    corners = detection.corners
                    object_points = np.array([
                        [-tag_size / 2, -tag_size / 2, 0],
                        [tag_size / 2, -tag_size / 2, 0],
                        [tag_size / 2, tag_size / 2, 0],
                        [-tag_size / 2, tag_size / 2, 0]
                    ])
                    retval, rvec, tvec = cv2.solvePnP(object_points, corners, self.camera_matrix, self.dist_coeffs)
                    if retval:
                        print()
                        print(f'Tag ID: {detection.tag_id}')
                        ############
                        
                        #xyz quaternion
                        rotation_matrix, _ = cv2.Rodrigues(rvec)
                        rotation = R.from_matrix(rotation_matrix)
                        quaternion = rotation.as_quat() 
                        print(f'Translation (x, y, z): {tvec[0][0]}, {tvec[1][0]}, {tvec[2][0]}')
                        print(f'Quaternion (wx, wy, wz, w): {quaternion[0]}, {quaternion[1]}, {quaternion[2]}, {quaternion[3]}')
                        ####################

            else:
                self.get_logger().info("No AprilTags detected.")
            
            ##############################################
        else:
            self.get_logger().error("Error during capture")

    def __del__(self):
        self.cam.close()

def main(args=None):
    rclpy.init(args=args)
    node = ZedCameraNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()