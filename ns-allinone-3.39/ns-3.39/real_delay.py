import sys
import math
import matplotlib.pyplot as plt
from graph_utils import update_value 

file = open(sys.argv[1], "r+")
p_size = int(sys.argv[2])
link_cap = int(sys.argv[3])

output_file = sys.argv[4]
row_to_update = int(sys.argv[5])

vals = []

queue = 0
num_pack = 0
for line in file:
    num_pack += 1
    queue += int(line[0])
    vals.append(int(line[0]))

avg_queue_size = queue/num_pack
queue_delay = (avg_queue_size * p_size * 8) / (link_cap*10**6) 
print("Average queue size: ", avg_queue_size)
print(f"Queueing delay in microseconds: {'%.2f' % (queue_delay*10**6)}")

variability = 0
for val in vals:
    variability += (((val * p_size * 8) / (link_cap*10**6)) - queue_delay)**2

variability = math.sqrt(variability / (num_pack-1))

print(f"Variability: {'%.2f' % (variability*10**6)}")

queue_delay *= 10**6
variability *= 10**6

update_value(output_file, row_to_update, "R_d", "%.2f" % queue_delay)
update_value(output_file, row_to_update, "R_v", "%.2f" % variability)
