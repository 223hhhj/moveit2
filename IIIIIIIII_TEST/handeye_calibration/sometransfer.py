import numpy as np
import transforms3d as tfs
import math
from scipy.spatial.transform import Rotation as R


'''
def eulardegree2hmmatrix(x, y, z, rx, ry, rz):
    rmat = tfs.euler.euler2mat(math.radians(rx), math.radians(ry), math.radians(rz), axes='rxyz') #extrinsic sxyz, intrinsic rxyz
    rmat = tfs.affines.compose(np.squeeze(np.asarray((x, y, z))), rmat, [1, 1, 1])
    return rmat
x, y, z, rx, ry, rz = 1, 2, 3, 45, 30, 60
matrix = eulardegree2hmmatrix(x, y, z, rx, ry, rz)
print(matrix)
'''
'''
def eularradian2hmmatrix(x, y, z, rx, ry, rz):
    rmat = tfs.euler.euler2mat(rx, ry, rz, axes='rxyz') #extrinsic sxyz, intrinsic rxyz
    rmat = tfs.affines.compose(np.squeeze(np.asarray((x, y, z))), rmat, [1, 1, 1])
    return rmat
x, y, z, rx, ry, rz = 1, 2, 3, 45, 30, 60
matrix = eularradian2hmmatrix(x, y, z, rx, ry, rz)
print(matrix)
'''

'''
def quaternion2hmmatrix(x, y, z, w_x, w_y, w_z, w):
    translation = np.array([x, y, z])
    norm = np.sqrt(w_x**2 + w_y**2 + w_z**2 + w**2)
    w_x /= norm
    w_y /= norm
    w_z /= norm
    w /= norm
    R = np.array([
        [1 - 2*(w_y**2 + w_z**2), 2*(w_x*w_y - w*w_z), 2*(w_x*w_z + w*w_y)],
        [2*(w_x*w_y + w*w_z), 1 - 2*(w_x**2 + w_z**2), 2*(w_y*w_z - w*w_x)],
        [2*(w_x*w_z - w*w_y), 2*(w_y*w_z + w*w_x), 1 - 2*(w_x**2 + w_y**2)]
    ])
    homogeneous_matrix = np.eye(4)
    homogeneous_matrix[:3, :3] = R
    homogeneous_matrix[:3, 3] = translation
    return homogeneous_matrix
x, y, z = 0.218,  -0.586, 0.1
w_x, w_y, w_z, w = 0.3700915, -0.239062, -0.0990258, 0.8922306
homogeneous_matrix = quaternion2hmmatrix(x, y, z, w_x, w_y, w_z, w)
print(homogeneous_matrix)

'''
'''
def eulerradian2quaternion(euler_radian):
    r = R.from_euler('XYZ', euler_radian) #extrinsic xyz, intrinsic XYZ
    return r.as_quat()
euler_radian = (0.1, 0.2, 0.3)  # Replace with your Euler angles in radians
quaternion = eulerradian2quaternion(euler_radian) #wx wy wz w
print("Quaternion:", quaternion)
'''

def eulerdegree2quaternion(euler_degree):
    euler_degree_rad = [math.radians(angle) for angle in euler_degree]
    r = R.from_euler('XYZ', euler_degree_rad)  # Extrinsic xyz, intrinsic XYZ #now use extrinsic 公轉
    return r.as_quat()
 # Replace with your Euler angles in degrees
euler_degrees = [
    [0, 0, 180]
]
# wx wy wz w
quaternions = [eulerdegree2quaternion(euler_degree) for euler_degree in euler_degrees]
for i, quaternion in enumerate(quaternions, 1):
    print(f"Quaternion {i}: {quaternion}")
print()

#################################################################################################
'''
def quaternion_to_euler(q):
    r = R.from_quat(q)
    euler_angles = r.as_euler('xyz', degrees=True)
    return euler_angles
quaternions = [
[0,0.024,1,-0.011],
[-0.012,0.02,0.928,0.372],
[-0.16972891965006376, -0.14479027146747678, 0.9736687248456685, -0.046873077349441676],
[0.000853636614465024, 0.026082487485555337, 0.9995703047607566, -0.013348445287159462]
]
# wx wy wz w
euler_angles = [quaternion_to_euler(quaternion) for quaternion in quaternions]
for i, euler_angles in enumerate(euler_angles, 1):
    print(f"euler_angle_extrinsic {i}: Roll: {euler_angles[0]:.2f}°, Pitch: {euler_angles[1]:.2f}°, Yaw: {euler_angles[2]:.2f}°")
'''



'''
# 定義兩個4x4矩陣
matrix1 = np.array([[  0.9800851,  0.1397077,  0.1411200, 1.06581410e-15],
  [-0.1594233,  0.9772748,  0.1397077, 1.06581410e-15],
  [-0.1183948, -0.1594233,  0.9800851, -3.55271368e-16],
 [ 0.00000000e+00 , 0.00000000e+00 , 0.00000000e+00 , 1.00000000e+00]])

matrix2 = np.array([[ 1,  0, 0 ,1],
   [0, 0, -1,2],
  [0, 1, 0, 3],
  [0 ,0,0,1  ]])

# 進行矩陣乘法
result = np.dot(matrix1, matrix2)
print("\nResult of Matrix Multiplication:")
print(result)

def matrix_to_xyz_quaternion(matrix):
    xyz = matrix[:3, 3]
    rotation_matrix = matrix[:3, :3]
    rotation = R.from_matrix(rotation_matrix)
    quaternion = rotation.as_quat()
    return np.concatenate((xyz, quaternion))
matrix = result

xyz_quaternion = matrix_to_xyz_quaternion(matrix)
print("xyz + quaternion:", xyz_quaternion)
'''

'''
def homogeneous_to_euler(homogeneous_matrix):
    rotation_matrix = homogeneous_matrix[:3, :3]
    r = R.from_matrix(rotation_matrix)
    euler_angles_rad = r.as_euler('xyz', degrees=False)
    euler_angles_deg = np.degrees(euler_angles_rad)
    return euler_angles_deg

# Example homogeneous matrix
homogeneous_matrix = np.array([
    [0.93936917,  0.11858494, 0.32175017,  0.18051276],
    [0.0389763,   0.96914356, -0.24339597, -0.52968985],
    [-0.3406852,   0.21609804, 0.91500559,  0.16386375],
    [0,      0,     0,  1]
])

euler_angles = homogeneous_to_euler(homogeneous_matrix)
print("Euler Angles (degrees):", euler_angles)
'''