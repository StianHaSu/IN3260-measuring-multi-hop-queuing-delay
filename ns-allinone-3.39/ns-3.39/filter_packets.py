from scapy.all import *
import sys

def extract_packet_size():
    if (len(sys.argv) < 3):
        print("Too few arguments")
        return -1

    #Opening output file
    file = open(sys.argv[1], "w+")
    print(""+
        "===============\n"+
        "    Reading    \n"+
        "==============="

    )

    #Reading in the pcap file
    packets = rdpcap(sys.argv[2])

    print(""+
        "===============\n"+
        "    Finished   \n"+
        "==============="

    )

    #Filtering out the probing packets based on packetsize
    for packet in packets:
        l = len(packet)
        if l == 64 or l == 800:
            file.write(str(l)+","+("%.6f" % packet.time)+"\n")


extract_packet_size()