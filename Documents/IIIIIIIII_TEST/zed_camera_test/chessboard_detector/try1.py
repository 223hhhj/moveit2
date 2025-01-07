import cv2
import numpy as np

# 讀取圖片
image_path = '3.png'  # 或 'path_to_your_image.png'
image = cv2.imread(image_path)
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# 定義棋盤格的尺寸
chessboard_size = (8, 5)  # 棋盤格內部的角點數量 (列, 行)

# 找到棋盤格角點
ret, corners = cv2.findChessboardCorners(gray, chessboard_size, 
                                         cv2.CALIB_CB_ADAPTIVE_THRESH + 
                                         cv2.CALIB_CB_NORMALIZE_IMAGE + 
                                         cv2.CALIB_CB_FAST_CHECK)

# 如果找到角點，則提高角點精度
if ret:
    criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)
    corners2 = cv2.cornerSubPix(gray, corners, (11, 11), (-1, -1), criteria)
    
    # 畫出角點
    cv2.drawChessboardCorners(image, chessboard_size, corners2, ret)
    cv2.imshow('Chessboard Corners', image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
else:
    print("未能找到棋盤格角點")
