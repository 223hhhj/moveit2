import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray, Float64
import socket
import codecs
import binascii
import time

def signed_bin2dec(bin_str: str) -> int:
    bin_str = bin_str.strip()
    if bin_str[:2] == '0b':
        if bin_str[2] == '_':
            bin_str = bin_str[3:]
        else:
            bin_str = bin_str[2:]
    if bin_str[0] == '_':
        raise ValueError('Input ' + bin_str + ' is invalid, the first character cannot be an underscore and consecutive underscores are not allowed.')
    elif bin_str[0] == '0':
        return int(bin_str, base=2)
    elif bin_str[0] == '1':
        a = int(bin_str, base=2)  # This statement checks if the input is valid
        bin_str = bin_str.replace('_', '')
        return a - 2 ** len(bin_str)
    else:
        raise ValueError('Input ' + bin_str + ' is invalid, must be a 2\'s complement binary number without positive or negative signs.')

def oneHex2fourBin(one_hex: str) -> str:
    return {
        '0': '0000',
        '1': '0001',
        '2': '0010',
        '3': '0011',
        '4': '0100',
        '5': '0101',
        '6': '0110',
        '7': '0111',
        '8': '1000',
        '9': '1001',
        'a': '1010', 'A': '1010',
        'b': '1011', 'B': '1011',
        'c': '1100', 'C': '1100',
        'd': '1101', 'D': '1101',
        'e': '1110', 'E': '1110',
        'f': '1111', 'F': '1111'
    }.get(one_hex, ValueError('Invalid hex character ' + one_hex + ', hex can only contain 0-9, a-f or A-F'))

def signed_hex2bin(hex_str: str, bin_width: int = -1) -> str:
    input_hex_str = hex_str
    hex_str = hex_str.strip()
    if hex_str[0] in ['+', '-', '_'] or hex_str[-1] == '_' or '__' in hex_str:
        raise ValueError('Input ' + input_hex_str + ' is invalid, must be a 2\'s complement hexadecimal number without positive or negative signs, '
                         + 'cannot start or end with an underscore, and cannot contain consecutive underscores.')
    elif hex_str[:2] == '0x':
        hex_str = hex_str[2:]
    hex_str = hex_str.replace('_', '')  # Remove underscores if the input is valid
    bin_str = ''.join(oneHex2fourBin(i) for i in hex_str)
    for i in range(len(bin_str) - 1):
        if bin_str[i + 1] == bin_str[0]:
            if i + 1 == len(bin_str) - 1:
                bin_str = bin_str[i:]
            else:
                continue
        else:
            bin_str = bin_str[i:]
            break
    if bin_str == '00':
        bin_str = '0'
    if bin_width != -1 and bin_width < len(bin_str):
        print('Warning: bin_width ' + str(bin_width) + ' < binary representation of ' + input_hex_str + ' (0b' + bin_str + ') with actual width ' + str(len(bin_str)) + ', please correct the bin_width parameter.')
    elif bin_width != -1:
        bin_str = bin_str[0] * (bin_width - len(bin_str)) + bin_str
    return '0b' + bin_str

def signed_hex2dec(hex_str: str) -> int:
    return signed_bin2dec(signed_hex2bin(hex_str))

def udp_get():
    ip = '192.168.1.1'
    port = 49152
    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    udp_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, True)
    udp_socket.connect((ip, int(port)))
    inp = '1234000200000001'
    udp_socket.send(codecs.decode(inp, 'hex'))
    data = udp_socket.recv(1024)

    if data:
        str_data = binascii.b2a_hex(data)
        new_data = str(str_data, encoding='utf-8')
        dd = new_data[24:]
        fx = signed_hex2dec(dd[0:8]) / 10000
        fy = signed_hex2dec(dd[8:16]) / 10000
        fz = signed_hex2dec(dd[16:24]) / 10000
        tx = signed_hex2dec(dd[24:32]) / 100000
        ty = signed_hex2dec(dd[32:40]) / 100000
        tz = signed_hex2dec(dd[40:48]) / 100000
    udp_socket.close()

    return fx, fy, fz, tx, ty, tz

class UDPPublisherNode(Node):
    def __init__(self):
        super().__init__('udp_publisher_node')
        self.sensor_publisher_ = self.create_publisher(Float64MultiArray, 'sensor_data', 10)
        self.velocity_publisher_ = self.create_publisher(Float64, 'velocity_control', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        fx, fy, fz, tx, ty, tz = udp_get()
        
        # 發布傳感器數據
        sensor_msg = Float64MultiArray()
        sensor_msg.data = [fx, fy, fz, tx, ty, tz]
        self.sensor_publisher_.publish(sensor_msg)
        
        # 計算並發布速度
        velocity = 0.0001 * (10 - fx)
        velocity_msg = Float64()
        velocity_msg.data = velocity
        self.velocity_publisher_.publish(velocity_msg)
        
        self.get_logger().info(f'Sensor data - fx: {fx:.4f}, fy: {fy:.4f}, fz: {fz:.4f}, tx: {tx:.4f}, ty: {ty:.4f}, tz: {tz:.4f}')
        self.get_logger().info(f'Calculated velocity: {velocity:.4f}')

def main(args=None):
    rclpy.init(args=args)
    node = UDPPublisherNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
