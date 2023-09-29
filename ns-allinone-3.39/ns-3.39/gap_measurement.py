import sys

if len(sys.argv) < 2:
    print("To few arguments, expected: filepath1.csv filepath2.csv")
    exit(-1)

file_in = open(sys.argv[1], "r+")
file_out = open(sys.argv[2], "w+")

file_out.write("Pair,Gap\n")
hp = None
for count, line in enumerate(file_in, 1):
    l = line.split(",")
    if (count % 2 == 0):
        file_out.write(str(int(count/2))+","+str(float(l[1])-hp)+"\n")
    else:
        hp = float(l[1])



