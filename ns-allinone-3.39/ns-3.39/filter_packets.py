from scapy.all import *
import sys

def extract_packet_size():
    if (len(sys.argv) < 3):
        print("Too few arguments")
        return -1

    #Opening output file
    file = open(sys.argv[1], "w+")
    print(""+
        "================\n"+
        "     Reading    \n"+
        "================"
    )

    trailing_packet_size = int(sys.argv[3])
    print(f"\n Filtering packets with size 64 and {trailing_packet_size}")
    
    #Filtering out the probing packets based on packetsize
    with PcapReader(sys.argv[2]) as pcap_reader:
        for packet in pcap_reader:
            l = len(packet)
            if l == 64 or l == trailing_packet_size:
                file.write(str(l)+","+("%.6f" % packet.time)+"\n")

    file.close()

extract_packet_size()
