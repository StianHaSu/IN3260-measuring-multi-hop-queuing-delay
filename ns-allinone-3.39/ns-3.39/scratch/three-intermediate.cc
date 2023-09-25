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

std::ofstream file("queue-size-1.csv");

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(1, 5);

int packet_trains = 400;

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
    packet_trains--;
    file << queue->GetCurrentSize().GetValue() << ",";
    file << 400-measurement << "\n";
    Simulator::Schedule(MicroSeconds(5), &traceQueueLength, queue, measurement-1);
}

int main(int argc, char* argv[]) {
    CommandLine cmd(__FILE__);
    cmd.Parse(argc, argv);

    Time::SetResolution(Time::NS);

    NodeContainer nodes;
    nodes.Create(17);

    MobilityHelper mobility;
    mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobility.Install(nodes);

    nodes.Get(0)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 10.0, 0.0));
    nodes.Get(1)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(30.0, 10.0, 0.0));
    nodes.Get(2)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(50.0, 10.0, 0.0));
    nodes.Get(3)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(70.0, 10.0, 0.0));
    nodes.Get(4)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(90.0, 10.0, 0.0));

    nodes.Get(5)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(15.0, 30.0, 0.0));
    nodes.Get(6)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 30.0, 0.0));
    nodes.Get(7)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(25.0, 30.0, 0.0));
    nodes.Get(8)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(30.0, 30.0, 0.0));

    nodes.Get(9)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(40.0, 30.0, 0.0));
    nodes.Get(10)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(45.0, 30.0, 0.0));
    nodes.Get(11)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(50.0, 30.0, 0.0));
    nodes.Get(12)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(55.0, 30.0, 0.0));

    nodes.Get(13)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(60.0, 30.0, 0.0));
    nodes.Get(14)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(65.0, 30.0, 0.0));
    nodes.Get(15)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(70.0, 30.0, 0.0));
    nodes.Get(16)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(75.0, 30.0, 0.0));

    InternetStackHelper stack;
    stack.Install(nodes);

    PointToPointHelper pointToPoint;
    pointToPoint.SetDeviceAttribute("DataRate", StringValue("1Gbps"));
    pointToPoint.SetChannelAttribute("Delay", StringValue("10ms"));

    //End-to-end path
    NodeContainer ab = NodeContainer(nodes.Get(0), nodes.Get(1));
    NodeContainer bc = NodeContainer(nodes.Get(1), nodes.Get(2));
    NodeContainer cd = NodeContainer(nodes.Get(2), nodes.Get(3));
    NodeContainer de = NodeContainer(nodes.Get(3), nodes.Get(4));

    //Cross traffic nodes for router 1
    NodeContainer fb = NodeContainer(nodes.Get(5), nodes.Get(1));
    NodeContainer gb = NodeContainer(nodes.Get(6), nodes.Get(1));
    NodeContainer hb = NodeContainer(nodes.Get(7), nodes.Get(1));
    NodeContainer ib = NodeContainer(nodes.Get(8), nodes.Get(1));

    //Cross traffic nodes for router 2
    NodeContainer jc = NodeContainer(nodes.Get(9), nodes.Get(2));
    NodeContainer kc = NodeContainer(nodes.Get(10), nodes.Get(2));
    NodeContainer lc = NodeContainer(nodes.Get(11), nodes.Get(2));
    NodeContainer mc = NodeContainer(nodes.Get(12), nodes.Get(2));

    //Cross traffic nodes for router 2
    NodeContainer nd = NodeContainer(nodes.Get(13), nodes.Get(3));
    NodeContainer od = NodeContainer(nodes.Get(14), nodes.Get(3));
    NodeContainer pd = NodeContainer(nodes.Get(15), nodes.Get(3));
    NodeContainer qd = NodeContainer(nodes.Get(16), nodes.Get(3));

    NetDeviceContainer devices1 = pointToPoint.Install(ab);
    NetDeviceContainer devices2 = pointToPoint.Install(bc);
    NetDeviceContainer devices3 = pointToPoint.Install(cd);
    NetDeviceContainer devices4 = pointToPoint.Install(de);

    NetDeviceContainer devices5 = pointToPoint.Install(fb);
    NetDeviceContainer devices6 = pointToPoint.Install(gb);
    NetDeviceContainer devices7 = pointToPoint.Install(hb);
    NetDeviceContainer devices8 = pointToPoint.Install(ib);

    NetDeviceContainer devices9 = pointToPoint.Install(jc);
    NetDeviceContainer devices10 = pointToPoint.Install(kc);
    NetDeviceContainer devices11 = pointToPoint.Install(lc);
    NetDeviceContainer devices12 = pointToPoint.Install(mc);

    NetDeviceContainer devices13 = pointToPoint.Install(nd);
    NetDeviceContainer devices14 = pointToPoint.Install(od);
    NetDeviceContainer devices15 = pointToPoint.Install(pd);
    NetDeviceContainer devices16 = pointToPoint.Install(qd);

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
    tch.Install(devices7);
    tch.Install(devices8);
    tch.Install(devices9);
    tch.Install(devices10);
    tch.Install(devices11);
    tch.Install(devices12);
    tch.Install(devices13);
    tch.Install(devices14);
    tch.Install(devices15);
    tch.Install(devices16);

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

    address.SetBase("10.1.7.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces7 = address.Assign(devices7);

    address.SetBase("10.1.8.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces8 = address.Assign(devices8);

    address.SetBase("10.1.9.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces9 = address.Assign(devices9);

    address.SetBase("10.1.10.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces10 = address.Assign(devices10);

    address.SetBase("10.1.11.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces11 = address.Assign(devices11);

    address.SetBase("10.1.12.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces12 = address.Assign(devices12);

    address.SetBase("10.1.13.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces13 = address.Assign(devices13);

    address.SetBase("10.1.14.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces14 = address.Assign(devices14);

    address.SetBase("10.1.15.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces15 = address.Assign(devices15);

    address.SetBase("10.1.16.0", "255.255.255.0");
    Ipv4InterfaceContainer interfaces16 = address.Assign(devices16);

    UdpServerHelper server(9);

    ApplicationContainer serverApps = server.Install(nodes.Get(2));
    serverApps.Start(Seconds(1.0));
    serverApps.Stop(Seconds(3.0));

    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    Ptr<Socket> source = Socket::CreateSocket(nodes.Get(0), UdpSocketFactory::GetTypeId());
    source->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    source->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));

    //Cross traffic node 1
    Ptr<Socket> crossTraffic1 = Socket::CreateSocket(nodes.Get(5), UdpSocketFactory::GetTypeId());
    crossTraffic1->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic1->Connect(InetSocketAddress(interfaces5.GetAddress(0), 9));

    Ptr<Socket> crossTraffic2 = Socket::CreateSocket(nodes.Get(6), UdpSocketFactory::GetTypeId());
    crossTraffic2->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic2->Connect(InetSocketAddress(interfaces6.GetAddress(0), 9));

    Ptr<Socket> crossTraffic3 = Socket::CreateSocket(nodes.Get(7), UdpSocketFactory::GetTypeId());
    crossTraffic3->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic3->Connect(InetSocketAddress(interfaces7.GetAddress(0), 9));

    Ptr<Socket> crossTraffic4 = Socket::CreateSocket(nodes.Get(8), UdpSocketFactory::GetTypeId());
    crossTraffic4->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic4->Connect(InetSocketAddress(interfaces8.GetAddress(0), 9));

    //Cross traffic node 2
    Ptr<Socket> crossTraffic5 = Socket::CreateSocket(nodes.Get(9), UdpSocketFactory::GetTypeId());
    crossTraffic5->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic5->Connect(InetSocketAddress(interfaces9.GetAddress(0), 9));

    Ptr<Socket> crossTraffic6 = Socket::CreateSocket(nodes.Get(10), UdpSocketFactory::GetTypeId());
    crossTraffic6->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic6->Connect(InetSocketAddress(interfaces10.GetAddress(0), 9));

    Ptr<Socket> crossTraffic7 = Socket::CreateSocket(nodes.Get(11), UdpSocketFactory::GetTypeId());
    crossTraffic7->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic7->Connect(InetSocketAddress(interfaces11.GetAddress(0), 9));

    Ptr<Socket> crossTraffic8 = Socket::CreateSocket(nodes.Get(12), UdpSocketFactory::GetTypeId());
    crossTraffic8->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic8->Connect(InetSocketAddress(interfaces12.GetAddress(0), 9));

    //Cross traffic node 3
    Ptr<Socket> crossTraffic9 = Socket::CreateSocket(nodes.Get(13), UdpSocketFactory::GetTypeId());
    crossTraffic9->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic9->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));

    Ptr<Socket> crossTraffic10 = Socket::CreateSocket(nodes.Get(14), UdpSocketFactory::GetTypeId());
    crossTraffic10->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic10->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));

    Ptr<Socket> crossTraffic11 = Socket::CreateSocket(nodes.Get(15), UdpSocketFactory::GetTypeId());
    crossTraffic11->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic11->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));

    Ptr<Socket> crossTraffic12 = Socket::CreateSocket(nodes.Get(16), UdpSocketFactory::GetTypeId());
    crossTraffic12->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic12->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));


    pointToPoint.EnablePcapAll("parallel-traffic");

    AnimationInterface anim("animation2.xml");
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic1, 10, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic2, 15, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic3, 20, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic4, 20, 400);

    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic5, 10, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic6, 15, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic7, 20, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic8, 20, 400);

    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic9, 10, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic10, 15, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic11, 20, 400);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic12, 20, 400);

    //Simulator::Schedule(Seconds(2.0), &SendTrainOfPackets, source, 5);
    Simulator::Schedule(MilliSeconds(2010), &traceQueueLength, queue, 400);
    Simulator::Run();
    Simulator::Destroy();
    file.close();
    return 0;
}
