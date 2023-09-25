from scapy.all import *

def extract_packet_size():
    file = open("probes.csv", "w+")
    print(""+
        "===============\n"+
        "    Reading    \n"+
        "==============="

    )
    packets = rdpcap("parallel-traffic-1-2.pcap")

    print(""+
        "===============\n"+
        "    Finished   \n"+
        "==============="

    )

    for packet in packets:
        l = len(packet)
        if l == 94 or l ==830:
            file.write(str(l)+","+("%.12f" % packet.time)+"\n")


extract_packet_size()