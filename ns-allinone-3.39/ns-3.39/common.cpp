//
// Created by Stian Sundkvist on 03/10/2023.
//

#include "ns3/applications-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/traffic-control-helper.h"
#include "ns3/netanim-module.h"
#include <random>
#include "include/packet_info.h"
#include <string>

using namespace ns3;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(0, 5);

int packet_trains = 400;

uint32_t* calculateTimeIntervals(packet_info *p_info) {
    uint32_t rates[4];
    if (p_info->link_cap == 1000){
        uint32_t t_rates[4] = RATES_1GB;
        std::memcpy(rates, t_rates, 4*sizeof(uint32_t));
    } else {
        uint32_t t_rates[4] = RATES_100MB;
        std::memcpy(rates, t_rates, 4*sizeof(uint32_t));
    }

    printf("Cross traffic rates: %dMbps %dMbps %dMbps %dMbps\n", rates[0], rates[1], rates[2], rates[3]);

    uint32_t time_interval[] = {
            (p_info->cross_traffic_s * 8) / rates[0],
            (p_info->cross_traffic_s * 8) / rates[1],
            (p_info->cross_traffic_s * 8) / rates[2],
            (p_info->cross_traffic_s * 8) / rates[3],
    };

    uint32_t *t_interval = (uint32_t *)malloc(sizeof (uint32_t) * 4);
    memcpy(t_interval, time_interval, sizeof (uint32_t) * 4);
    return t_interval;
}

//Sends a single packet over the socket with a given packet size
void SendPacket(Ptr<Socket> socket, int packet_size) {
    socket->SetIpTtl(64); //Standard ttl value
    Ptr<ns3::Packet> packet = Create<Packet>(packet_size);
    socket->Send(packet);
}

//Sends a packet with a given ttl, used for the redundant packet
void SendPacketWithTTL(Ptr<Socket> socket, int packet_size, int ttl) {
    socket->SetIpTtl(ttl);
    Ptr<Packet> packet = Create<Packet>(packet_size);
    socket->Send(packet);
}

//Sends a train of packets i.e the compound probe
void SendProbingPacket(packet_info *p_info, Ptr<Socket> socket, int ttl, int rate) {
    if (packet_trains % 50 == 0) { std::cout<<packet_trains<<std::endl; }

    if (packet_trains < 1) return;
    if (ttl > 0) {
        SendPacketWithTTL(socket, 3500, ttl);
    }
    SendPacket(socket, p_info->heading_s);
    SendPacket(socket, p_info->trailing_s);
    packet_trains--;

    Simulator::Schedule(MilliSeconds(rate + 10*dis(gen)), &SendProbingPacket, p_info, socket, ttl, rate);
}

//Sends packet with a given time interval and packet size
void GenerateCrossTraffic(packet_info *p_info, Ptr<Socket> socket, int rate) {
    if (packet_trains < 1) return;
    SendPacket(socket, p_info->cross_traffic_s-30);

    Simulator::Schedule(MicroSeconds(rate), &GenerateCrossTraffic, p_info, socket, rate);
}

//Measures the queue length of a given queue, every rate microseconds
void traceQueueLength(Ptr<Queue<Packet>> queue, int measurement, std::ofstream *file, int rate) {
    packet_trains--;
    if (measurement < 1) return;
    *file << queue->GetCurrentSize().GetValue() << ",";
    *file << 400-measurement << "\n";
    Simulator::Schedule(NanoSeconds(rate), &traceQueueLength, queue, measurement-1, file, rate);
}

void setup_packet_info(packet_info *p_info,
                       uint32_t ps_heading,
                       uint32_t ps_trailing,
                       uint32_t ps_cross,
                       uint16_t link_cap
){
    p_info->heading_s = ps_heading-30;
    p_info->trailing_s = ps_trailing-30;
    p_info->cross_traffic_s = ps_cross;
    p_info->link_cap = link_cap;
}
