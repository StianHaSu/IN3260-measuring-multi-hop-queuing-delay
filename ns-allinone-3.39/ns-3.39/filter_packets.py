from scapy.all import *
import sys

def extract_packet_size():
    if (len(sys.argv) < 3):
        print("Too few arguments")
        return -1

    file = open(sys.argv[1], "w+")
    print(""+
        "===============\n"+
        "    Reading    \n"+
        "==============="

    )
    packets = rdpcap(sys.argv[2])

    print(""+
        "===============\n"+
        "    Finished   \n"+
        "==============="

    )

    for packet in packets:
        l = len(packet)
        if l == 64 or l ==800:
            file.write(str(l)+","+("%.12f" % packet.time)+"\n")


extract_packet_size()