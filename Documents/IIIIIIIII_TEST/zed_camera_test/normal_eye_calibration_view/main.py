"""
Copyright (c) 2015-2022 IVISO GmbH

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
"""

import cv2
import yaml
import numpy as np
import matplotlib.pyplot as plt
import glob

# Load camera calibration YAML
dataset_dir = "camcalib_tutorial_data/"
filename = dataset_dir+"5.yaml"
with open(filename,"r") as f:
    print("Loading ", filename)
    calibration_parameters = yaml.load(f, Loader=yaml.FullLoader)

# Extract the calibration data for camera 1 & 2 from calibration_parameters variable
print("Preparing calibration data")
cam1_parameters = calibration_parameters['sensors']['Hero4']

# Extract camera 1 & 2 intrinsic parameters from cam1_parameters
cam1_intrinsics = cam1_parameters['intrinsics']['parameters']

# Prepare variables for undistort and undistort-rectify map creation
image_size = cam1_intrinsics['image_size']
cam1_camera_matrix = np.array([[cam1_intrinsics['fx'], 0, cam1_intrinsics['cx']],
                               [0, cam1_intrinsics['fy'], cam1_intrinsics['cy']],
                               [0, 0, 1]])

# Check which distortion model to use
cv = None
dist_keys = None
model = None
if cam1_parameters['intrinsics']['type'] == 'Pinhole':
    cv = cv2
    dist_keys = []
elif cam1_parameters['intrinsics']['type'] == 'PinholeRadTan':
    cv = cv2
    dist_keys = ['k1', 'k2', 'p1', 'p2']
elif cam1_parameters['intrinsics']['type'] == 'KannalaBrandt':
    cv = cv2.fisheye
    dist_keys = ['k1', 'k2', 'k3', 'k4']
else:
    raise "Opencv cannot handle these camera models"

# Compute undistortion maps - these are only required to demonstrate undistortion
cam1_distortion = np.array([cam1_intrinsics[k] for k in dist_keys])
print("Computing undistortion maps...")
undistort_map1 = cv.initUndistortRectifyMap(cam1_camera_matrix,
                                            cam1_distortion,
                                            np.eye(3),
                                            cam1_camera_matrix,
                                            image_size,
                                            cv2.CV_32F)

# Load a stereo image pair
img_fn = dataset_dir+"Hero4/5.png"
img1_raw = cv2.imread(img_fn)

# Undistort images - undistortion example
print("Undistorting image", img_fn)
img1_undist = cv2.remap(img1_raw, *undistort_map1, cv2.INTER_LANCZOS4)

ud_img_fn = dataset_dir+"Hero4/005_UD.JPG"
print("Saving undistorted image", ud_img_fn)
cv2.imwrite(ud_img_fn,img1_undist)