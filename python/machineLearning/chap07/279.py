import matplotlib.pyplot as plt
import numpy as np
import random

def gen_data(numPoints, bias, variance, weight = 1):
    x = np.zeros(shape=(numPoints, 1))
    y = np.zeros(shape=(numPoints, 1))
    for i in range(0, numPoints):
        x[i][0] = 1
        x[i][1] = i
        y[i] = (i+bias) + random.uniform(0, 1) * variance
    return x, y

x, y = gen_data(100, 25, 10)

plt.plot(x[:,1]+1,y,"ro")
plt.show()