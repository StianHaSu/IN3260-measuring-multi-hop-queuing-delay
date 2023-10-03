import sys

if len(sys.argv) < 2:
    print("To few arguments, expected: filepath1.csv filepath2.csv")
    exit(-1)

#csv file containing every probing packet
file_in = open(sys.argv[1], "r+")
#Output csv file 
file_out = open(sys.argv[2], "w+")

file_out.write("Gap\n")

#hp refers to the heading packet which 
hp = None
#Enumerate the input file
for count, line in enumerate(file_in, 1):
    l = line.split(",")
    #Every other line represents a trailing packet
    if (count % 2 == 0):
        #The time difference between the heading packet
        #and trailing packet is written to the output file
        file_out.write("%.6f" % (float(l[1])-hp) +"\n")
    else:
        hp = float(l[1])



