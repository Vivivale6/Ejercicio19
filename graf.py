import numpy as  np
import matplotlib.pyplot as plt

dat = np.loadtxt("t.txt")

x= dat[:,0]
y= dat[:,1]


expon=np.exp(-x)

error=np.abs(y-expon)/expon

plt.scatter(x, error)
plt.savefig("error.png")



