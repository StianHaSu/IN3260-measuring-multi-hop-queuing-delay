import matplotlib.pyplot as plt
import numpy as np

plt.style.use('_mpl-gallery')

xs = []
ys = []

file = open("./queue-size.csv", "+r")

for l in file:
    bits = l.split(",")
    xs.append(int(bits[0]))
    ys.append(int(bits[1]))

plt.plot(ys, xs)
plt.show()