import pickle
import numpy as np

f1= open('./calibration.pkl','rb')
data1 = pickle.load(f1)
print(data1)

f2 = open('./cameraMatrix.pkl','rb')
data2 = pickle.load(f2)
print(data2)

f3 = open('./dist.pkl','rb')
data3 = pickle.load(f3)
print(data3)