import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/steven/ros2_ws/src/zed_camera_publisher/install/zed_camera_publisher'
