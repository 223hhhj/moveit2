import numpy as np


matrix = np.array([[  0.8660865, -0.0002419, -0.4998941],
  [-0.3536574,  0.7064523, -0.6130674],
   [0.3532997,  0.7077606,  0.6117632 ]])

transpose_matrix = np.transpose(matrix)
result1 = np.dot(matrix, transpose_matrix)
print(result1)

print()

inverse_matrix = np.linalg.inv(matrix)
result2 = np.dot(matrix, inverse_matrix)
print(result2)