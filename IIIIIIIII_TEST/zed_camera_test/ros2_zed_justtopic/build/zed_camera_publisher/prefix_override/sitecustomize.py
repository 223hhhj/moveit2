import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/ros2_zed_justtopic/install/zed_camera_publisher'
