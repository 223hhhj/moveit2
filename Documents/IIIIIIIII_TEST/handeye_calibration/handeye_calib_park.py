"""
眼在手外的手眼标定使用opencv函数cv2.calibrateHandEye
读取指定文件夹下标定板相对于相机chess_to_cam和end_to_base, 并求出camera相对于base的旋转矩阵。
"""
#csv檔案名稱記得改
import cv2
import numpy as np
import transforms3d as tfs
import math
import open3d as o3d
import copy
from scipy.spatial.transform import Rotation as R
import csv
import pandas as pd

def read_csv_specific_columns_1(file_path, start_col, end_col, encoding):
    try:
        df = pd.read_csv(file_path, usecols=range(start_col-1, end_col), encoding=encoding, skiprows=1)
        data = df.values.tolist()
        return data
    except Exception as e:
        print(f"Error reading the CSV file: {e}")
        return None

####################################################################################
# 標定板在相機座標系下的平移/旋轉 x y z qx qy qz qw
file_path = '/home/steven/Documents/IIIIIIIII_TEST/handeye_calibration/pose_data_record_total.csv'
start_col = 2
end_col = 8
encoding = 'ascii'  # 使用檢測到的編碼
chess_to_cam = read_csv_specific_columns_1(file_path, start_col, end_col, encoding)

####################################################################################
# 機械手臂終止在基底座標系下的平移/旋轉 x y z qx qy qz qw
file_path = '/home/steven/Documents/IIIIIIIII_TEST/handeye_calibration/pose_data_record_total.csv'
start_col = 9
end_col = 15
encoding = 'ascii'  # 使用檢測到的編碼
end_to_base = read_csv_specific_columns_1(file_path, start_col, end_col, encoding)

####################################################################################
chess_to_cam_R,chess_to_cam_T = [],[]
end_to_base_R,end_to_base_T = [],[]
base_to_end_R,base_to_end_T = [],[]

for chess_cam in chess_to_cam:
    cc=chess_cam[3:7]
    r = R.from_quat([cc[0],cc[1],cc[2],cc[3]])
    cc_R = r.as_matrix() 
    chess_to_cam_R.append(cc_R)
    chess_to_cam_T.append(np.array(chess_cam[0:3]).reshape(3,1))

for end_base in end_to_base:
    ed=end_base[3:7]
    r = R.from_quat((ed[0],ed[1],ed[2],ed[3]))
    ed_R = r.as_matrix()
    end_to_base_R.append(ed_R)
    end_to_base_T.append(np.array(end_base[0:3]).reshape(3,1))

    Trans=-np.array(end_base[0:3]).reshape(3,1) 
    Trans=(ed_R.transpose())@Trans
    base_to_end_R.append(ed_R.transpose())
    base_to_end_T.append(Trans)

cam_to_base_R,cam_to_base_T = cv2.calibrateHandEye(base_to_end_R,base_to_end_T,chess_to_cam_R,chess_to_cam_T,
                                                 method=cv2.CALIB_HAND_EYE_PARK)    

cam_to_base_RT = tfs.affines.compose(np.squeeze(cam_to_base_T), cam_to_base_R, [1, 1, 1])    
print("標定結果：\n",cam_to_base_RT,"\n")
print("###################################################")

########################################################
#驗證用
def homogeneous_to_euler(homogeneous_matrix):
    rotation_matrix = homogeneous_matrix[:3, :3]
    r = R.from_matrix(rotation_matrix)
    euler_angles_rad = r.as_euler('xyz', degrees=False) #extrinsic
    euler_angles_deg = np.degrees(euler_angles_rad) 
    return euler_angles_deg

def to_homogeneous(x, y, z, qx, qy, qz, qw):
    T = np.array([x, y, z]) # 平移向量
    r = R.from_quat([qx, qy, qz, qw]) # 四元数转旋转矩阵
    R_mat = r.as_matrix() # 构建齐次矩阵
    RT = np.eye(4)
    RT[:3, :3] = R_mat
    RT[:3, 3] = T
    return RT

def multiply_positions_by_minus_one(matrix):
    # 定義要乘以-1的位置列表，使用(行, 列)格式
    positions_to_multiply = [(1, 0), (0, 2), (2, 2)]
    for pos in positions_to_multiply:
        matrix[pos] *= -1
    return matrix


#camera
x, y, z, qx, qy, qz, qw = 0.23015065213338715, 0.12405488732469268, 0.308730622561953, -0.024364760074960048, -0.005873962669927197, 0.010856049059609867, 0.9996269310236982
#x, y, z, qx, qy, qz, qw = -0.205756,0.050379,0.229375,-0.27489,-0.258664,0.669966,0.639273
camera_hm = to_homogeneous(x, y, z, qx, qy, qz, qw)
computed = cam_to_base_RT @ camera_hm
print(computed)
euler_angles_1 = homogeneous_to_euler(computed)
print("Euler Angles (degrees):", euler_angles_1)
translation = computed[:3, 3] #提取平移向量
print("Translation vector:", translation)
print()


#robot_arm
x1, y1, z1, qx1, qy1, qz1, qw1 = 0.25, -0.75, 0.14, 0, 0, 1.0, 0
#x1, y1, z1, qx1, qy1, qz1, qw1 = -0.185,-0.69,0.22,0.270598,0.270598,0.653281,0.653281
arm_hm = to_homogeneous(x1, y1, z1, qx1, qy1, qz1, qw1)
print(arm_hm)
euler_angles_2 = homogeneous_to_euler(arm_hm)
print("Euler Angles (degrees):", euler_angles_2)
translation = arm_hm[:3, 3] #提取平移向量
print("Translation vector:", translation) #提取平移向量

