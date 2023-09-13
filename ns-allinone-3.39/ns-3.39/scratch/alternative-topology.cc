#include "ns3/applications-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/traffic-control-helper.h"
#include "ns3/netanim-module.h"
#include "../src/mobility/helper/mobility-helper.h"
#include "../src/mobility/model/constant-position-mobility-model.h"


using namespace ns3;

NS_LOG_COMPONENT_DEFINE("OneIntermediateNode");

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
    SendPacketWithTTL(socket, 2048, ttl);
    SendPacket(socket, 512);
    SendPacket(socket, 1028);
    socket->Close();
}

void GenerateCrossTraffic(Ptr<Socket> socket, int packetNum) {
    if (packetNum < 1) { return; }
    SendPacket(socket, 100);

    Simulator::Schedule(MicroSeconds(500), &GenerateCrossTraffic, socket, packetNum-1);
}

int main(int argc, char* argv[]) {
    CommandLine cmd(__FILE__);
    cmd.Parse(argc, argv);

    Time::SetResolution(Time::NS);

    NodeContainer nodes;
    nodes.Create(9);

    MobilityHelper mobility;
    mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobility.Install(nodes);

    //Positioning of nodes for NetAnim visualisation
    nodes.Get(0)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 10.0, 0.0));
    nodes.Get(1)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 20.0, 0.0));
    nodes.Get(2)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 30.0, 0.0));
    nodes.Get(3)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 40.0, 0.0));
    nodes.Get(4)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(10.0, 50.0, 0.0));

    nodes.Get(5)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 20.0, 0.0));
    nodes.Get(6)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(20.0, 40.0, 0.0));

    nodes.Get(7)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(0.0, 20.0, 0.0));
    nodes.Get(8)->GetObject<ConstantPositionMobilityModel>()->SetPosition(Vector(0.0, 40.0, 0.0));


    InternetStackHelper stack;
    stack.Install(nodes);

    PointToPointHelper pointToPoint;
    pointToPoint.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
    pointToPoint.SetChannelAttribute("Delay", StringValue("2ms"));

    //End-to-end path 0-0-0-0-0
    NodeContainer ab = NodeContainer(nodes.Get(0), nodes.Get(1));
    NodeContainer bc = NodeContainer(nodes.Get(1), nodes.Get(2));
    NodeContainer cd = NodeContainer(nodes.Get(2), nodes.Get(3));
    NodeContainer de = NodeContainer(nodes.Get(3), nodes.Get(4));

    NodeContainer fb = NodeContainer(nodes.Get(5), nodes.Get(1));
    NodeContainer gd = NodeContainer(nodes.Get(6), nodes.Get(3));

    NodeContainer bh = NodeContainer(nodes.Get(1), nodes.Get(7));
    NodeContainer dj = NodeContainer(nodes.Get(3), nodes.Get(8));

    NetDeviceContainer devices1 = pointToPoint.Install(ab);
    NetDeviceContainer devices2 = pointToPoint.Install(bc);
    NetDeviceContainer devices3 = pointToPoint.Install(cd);
    NetDeviceContainer devices4 = pointToPoint.Install(de);
    NetDeviceContainer devices5 = pointToPoint.Install(fb);
    NetDeviceContainer devices6 = pointToPoint.Install(gd);
    NetDeviceContainer devices7 = pointToPoint.Install(bh);
    NetDeviceContainer devices8 = pointToPoint.Install(dj);


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

    UdpServerHelper server(9);

    ApplicationContainer serverApps = server.Install(nodes.Get(4));
    serverApps.Start(Seconds(1.0));
    serverApps.Stop(Seconds(10.0));

    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    Ptr<Socket> source = Socket::CreateSocket(nodes.Get(0), UdpSocketFactory::GetTypeId());
    source->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    source->Connect(InetSocketAddress(interfaces4.GetAddress(1), 9));

    Ptr<Socket> crossTraffic1 = Socket::CreateSocket(nodes.Get(5), UdpSocketFactory::GetTypeId());
    crossTraffic1->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic1->Connect(InetSocketAddress(interfaces7.GetAddress(1), 9));

    Ptr<Socket> crossTraffic2 = Socket::CreateSocket(nodes.Get(6), UdpSocketFactory::GetTypeId());
    crossTraffic2->Bind(InetSocketAddress(Ipv4Address::GetAny(), 9));
    crossTraffic2->Connect(InetSocketAddress(interfaces8.GetAddress(1), 9));

    pointToPoint.EnablePcapAll("alternative-topology");

    AnimationInterface anim("animation.xml");
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic1, 10);
    Simulator::Schedule(Seconds(2.0), &GenerateCrossTraffic, crossTraffic2, 10);
    Simulator::Schedule(Seconds(2.0), &SendTrainOfPackets, source, 2);
    Simulator::Run();
    Simulator::Destroy();

    return 0;
}
