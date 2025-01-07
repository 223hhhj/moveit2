import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/steven/ros2_ws/src/hex v2 driver/install/udp_publisher'
