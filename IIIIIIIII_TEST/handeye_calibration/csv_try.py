import pandas as pd

# 讀取CSV檔案中的指定列
def read_csv_specific_columns_1(file_path, start_col, end_col, encoding):
    try:
        df = pd.read_csv(file_path, usecols=range(start_col-1, end_col), encoding=encoding)
        #data = df.values.tolist()
        data = df.head(3).values.tolist()  # 只選擇前3行
        print("CSV file read successfully!")
        return data
    except Exception as e:
        print(f"Error reading the CSV file: {e}")
        return None

# 讀取CSV檔案
file_path = '/home/steven/Documents/IIIIIIIII_TEST/handeye_calibration/combine_pose_data_record.csv'
start_col = 2
end_col = 8
encoding = 'ascii'  # 使用檢測到的編碼
chess_to_cam = read_csv_specific_columns_1(file_path, start_col, end_col, encoding)
print(chess_to_cam)
import numpy as np

camera = np.array([-0.2314, 0.057, 0.309]).reshape(3, 1)
print(camera)

