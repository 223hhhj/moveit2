import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/steven/Documents/IIIIIIIII_TEST/hex v2 driver/install/udp_publisher'
