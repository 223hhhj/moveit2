import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/steven/Documents/IIIIIIIII_TEST/handeye_calibration/src/zed_camera_publisher/install/zed_camera_publisher'
