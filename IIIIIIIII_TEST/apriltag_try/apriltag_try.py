import cv2
import numpy as np
import apriltag

imagepath = '3.png'
image = cv2.imread(imagepath, cv2.IMREAD_GRAYSCALE)
detector = apriltag.Detector()

detections = detector.detect(image)
print(detections)

