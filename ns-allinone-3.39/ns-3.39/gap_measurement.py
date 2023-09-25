file_in = open("probes.csv", "r+")
file_out = open("probe_gaps.csv", "w+")

file_out.write("Pair,Gap\n")
hp = None
for count, line in enumerate(file_in, 1):
    l = line.split(",")
    if (count % 2 == 0):
        file_out.write(str(int(count/2))+","+str(float(l[1])-hp)+"\n")
    else:
        hp = float(l[1])



