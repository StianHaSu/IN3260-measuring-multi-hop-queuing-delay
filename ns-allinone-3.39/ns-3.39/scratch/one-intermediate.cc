#include "ns3/applications-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/traffic-control-helper.h"
#include "ns3/netanim-module.h"
#include "../src/mobility/helper/mobility-helper.h"
#include "../src/mobility/model/constant-position-mobility-model.h"
#include <random>


using namespace ns3;

NS_LOG_COMPONENT_DEFINE("OneIntermediateNode");

std::ofstream file("queue-size.csv");

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(1, 5);

int packet_trains = 500;

void SendPacket(Ptr<Socket> socket, int packet_size) {
    socket->SetIpTtl(64); //Standard ttl value
    Ptr<ns3::Packet> packet = Create<Packet>(packet_size);
    socket->Send(packet);
}

void SendPacketWithTTL(Ptr<Socket> socket, int packet_size, int ttl) {
    socket->SetIpTtl(ttl);
    
    Ptr<Packet> packet = Create<Packet>(packet_size);
    socket->Send(packet);
}

void SendTrainOfPackets(Ptr<Socket> socket, int ttl) {
    if (packet_trains % 50 == 0)std::cout<<packet_trains<<std::endl;
    if (packet_trains < 1) return;
    //SendPacketWithTTL(socket, 2048, ttl);
    SendPacket(socket, 64);
    SendPacket(socket, 800);
    packet_trains--;

    Simulator::Schedule(MilliSeconds(dis(gen)*10), &SendTrainOfPackets, socket, ttl);
}

void GenerateCrossTraffic(Ptr<Socket> socket, int rate, int p_size) {
    if (packet_trains < 1) return;
    SendPacket(socket, p_size);

    Simulator::Schedule(MicroSeconds(rate), &GenerateCrossTraffic, socket, rate, p_size);
}

void traceQueueLength(Ptr<Queue<Packet>> queue, int measurement) {
    if (measurement < 1) return;
    file << queue->GetCurrentSize().GetValue() << ",";
    file << 400-measurement << "\n";
    Simulator::Schedule(MicroSeconds(5), &traceQueueLength, queue, measurement-1);
}

int main(int argc, char* argv[]) {
    CommandLine cmd(__FILE__);
    cmd.Parse(argc, argv);

    Time::SetResolution(Time::NS);

    NodeContainer nodes;
    nodes.Create(7);

    MobilityHelper mobility;
    mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobility.Install(nodes);

    nodes.Get(0)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 10.0, 0.0));
    nodes.Get(1)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 20.0, 0.0));
    nodes.Get(2)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 30.0, 0.0));

    nodes.Get(3)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 15.0, 0.0));
    nodes.Get(4)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 20.0, 0.0));
    nodes.Get(5)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 25.0, 0.0));
    nodes.Get(6)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 30.0, 0.0));

    InternetStackHelper stack;
    stack.Install(nodes);

    PointToPointHelper pointToPoint;
    pointToPoint.SetDeviceAttribute("DataRate", StringValue("1Gbps"));
    pointToPoint.SetChannelAttribute("Delay", StringValue("10ms"));

    //End-to-end path
    NodeContainer ab = NodeContainer(nodes.Get(0), nodes.Get(1));
    NodeContainer bc = NodeContainer(nodes.Get(1), nodes.Get(2));

    NodeContainer db = NodeContainer(nodes.Get(3), nodes.Get(1));
    NodeContainer fb = NodeContainer(nodes.Get(4), nodes.Get(1));
    NodeContainer gb = NodeContainer(nodes.Get(5), nodes.Get(1));
    NodeContainer hb = NodeContainer(nodes.Get(6), nodes.Get(1));

    NetDeviceContainer devices1 = pointToPoint.Install(ab);
    NetDeviceContainer devices2 = pointToPoint.Install(bc);
    NetDeviceContainer devices3 = pointToPoint.Install(db);
    NetDeviceContainer devices4 = pointToPoint.Install(fb);
    NetDeviceContainer devices5 = pointToPoint.Install(gb);
    NetDeviceContainer devices6 = pointToPoint.Install(hb);

    Ptr<PointToPointNetDevice> netDevice = DynamicCast<PointToPointNetDevice>(devices2.Get(0));
    Ptr<Queue<Packet>> queue = netDevice->GetQueue();

    TrafficControlHelper tch;
    tch.SetRootQueueDisc("ns3::FifoQueueDisc");

    tch.Install(devices1);
    tch.Install(devices2);
    tch.Install(devices3);
    tch.Install(devices4);
    tch.Install(devices5);
    tch.Install(devices6);

    Ipv4AddressHelper address;
    
    address.SetBase("10.1.1.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces1 = address.Assign(devices1);

    address.SetBase("10.1.2.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces2 = address.Assign(devices2);

    address.SetBase("10.1.3.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces3 = address.Assign(devices3);

    address.SetBase("10.1.4.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces4 = address.Assign(devices4);

    address.SetBase("10.1.5.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces5 = address.Assign(devices5);

    address.SetBase("10.1.6.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces6 = address.Assign(devices6);

    UdpServerHelper server(9);

    ApplicationContainer serverApps = server.Install(nodes.Get(2));
    serverApps.Start(Seconds(1.0));
    serverApps.Stop(Seconds(3.0));

    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    Ptr<Socket> source = Socket::CreateSocket(nodes.Get(0), UdpSocketFactory::GetTypeId());
    source->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    source->Connect(InetSocketAddress(interfaces2.GetAddress(1), 9));

    Ptr<Socket> crossTraffic1 = Socket::CreateSocket(nodes.Get(3), UdpSocketFactory::GetTypeId());
    crossTraffic1->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic1->Connect(InetSocketAddress(interfaces2.GetAddress(1), 9));

    Ptr<Socket> crossTraffic2 = Socket::CreateSocket(nodes.Get(4), UdpSocketFactory::GetTypeId());
    crossTraffic2->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic2->Connect(InetSocketAddress(interfaces2.GetAddress(1), 9));

    Ptr<Socket> crossTraffic3 = Socket::CreateSocket(nodes.Get(5), UdpSocketFactory::GetTypeId());
    crossTraffic3->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic3->Connect(InetSocketAddress(interfaces2.GetAddress(1), 9));

    Ptr<Socket> crossTraffic4 = Socket::CreateSocket(nodes.Get(6), UdpSocketFactory::GetTypeId());
    crossTraffic4->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic4->Connect(InetSocketAddress(interfaces2.GetAddress(1), 9));

    pointToPoint.EnablePcapAll("parallel-traffic");

    AnimationInterface anim("animation.xml");
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic1, 10, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic2, 15, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic3, 20, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic4, 20, 400);
    Simulator::Schedule(Seconds(2.0), &SendTrainOfPackets, source, 5);
    Simulator::Schedule(MilliSeconds(2002), &traceQueueLength, queue, 400);
    Simulator::Run();
    Simulator::Destroy();
    file.close();
    return 0;
}
