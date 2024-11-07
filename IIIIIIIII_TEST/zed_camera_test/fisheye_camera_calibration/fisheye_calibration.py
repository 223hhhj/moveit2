import numpy as np
import cv2 as cv
import glob
import pickle

################ FIND CHESSBOARD CORNERS - OBJECT POINTS AND IMAGE POINTS #############################

chessboardSize = (12, 17)  # Adjust as needed

# Termination criteria
criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER, 30, 0.001)

# Prepare object points, like (0,0,0), (1,0,0), (2,0,0), ..., (8,5,0)
objp = np.zeros((1, chessboardSize[0] * chessboardSize[1], 3), np.float32)
objp[0, :, :2] = np.mgrid[0:chessboardSize[0], 0:chessboardSize[1]].T.reshape(-1, 2)

# Arrays to store object points and image points from all the images.
objpoints = []  # 3d point in real world space
imgpoints = []  # 2d points in image plane

images = glob.glob('*.png')

for image in images:
    img = cv.imread(image)
    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    # Find the chess board corners
    ret, corners = cv.findChessboardCorners(gray, chessboardSize, cv.CALIB_CB_ADAPTIVE_THRESH + cv.CALIB_CB_NORMALIZE_IMAGE + cv.CALIB_CB_FAST_CHECK)

    # If found, add object points, image points (after refining them)
    if ret:
        objpoints.append(objp)
        corners2 = cv.cornerSubPix(gray, corners, (3, 3), (-1, -1), criteria)
        imgpoints.append(corners2)

        # Draw and display the corners
        cv.drawChessboardCorners(img, chessboardSize, corners2, ret)
        cv.imshow('img', img)
        cv.waitKey(50)
    else:
        print(f"Chessboard corners not found in image {image}")

cv.destroyAllWindows()

############## FISHEYE CALIBRATION #######################################################

# Initialize the fisheye camera matrix and distortion coefficients
K = np.zeros((3, 3))
D = np.zeros((4, 1))
rvecs = []
tvecs = []

# Convert object points and image points to the correct format
objpoints = np.array(objpoints, dtype=np.float64)
imgpoints = np.array(imgpoints, dtype=np.float64)

# Calibrate the camera using the fisheye model
ret, K, D, rvecs, tvecs = cv.fisheye.calibrate(
    objpoints,
    imgpoints,
    gray.shape[::-1],  # Use the shape from the last processed image
    K,
    D,
    rvecs,
    tvecs,
    cv.fisheye.CALIB_RECOMPUTE_EXTRINSIC + cv.fisheye.CALIB_CHECK_COND + cv.fisheye.CALIB_FIX_SKEW,
    criteria
)

# Save the fisheye camera calibration result for later use
pickle.dump((K, D), open("fisheye_calibration.pkl", "wb"))
pickle.dump(K, open("fisheye_cameraMatrix.pkl", "wb"))
pickle.dump(D, open("fisheye_dist.pkl", "wb"))

print("Fisheye calibration completed successfully.")


# Test calibration result
img = cv.imread('6.png')  # Replace with your test image path
DIM = gray.shape[::-1]
K = np.array(K)
D = np.array(D)

map1, map2 = cv.fisheye.initUndistortRectifyMap(K, D, np.eye(3), K, DIM, cv.CV_16SC2)
undistorted_img = cv.remap(img, map1, map2, interpolation=cv.INTER_LINEAR, borderMode=cv.BORDER_CONSTANT)

cv.imwrite("undistorted_img.jpg", undistorted_img)
cv.imshow("undistorted", undistorted_img)
cv.waitKey(0)
cv.destroyAllWindows()

