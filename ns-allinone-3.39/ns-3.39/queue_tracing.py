import matplotlib.pyplot as plt
import numpy as np
import sys

plt.style.use('_mpl-gallery')

xs = []
ys = []


file_name = sys.argv[1]
file = open(file_name, "+r")

for l in file:
    bits = l.split(",")
    xs.append(int(bits[0]))
    ys.append(int(bits[1]))

plt.plot(ys, xs, color="black")
plt.yticks(range(max(xs)+2))
plt.tight_layout(pad=2.0) 
plt.show()