LEADING_PACKET = 64
TRAILING_PACKET = 1400
TRAFFIC_PACKET = 200
LINK_CAP = 100

build:
	./ns3 configure -d debug --enable-examples --enable-tests
	./ns3 build

oneIntermediate:
	./ns3 run scratch/one-intermediate

threeIntermediate:
	./ns3 run scratch/three-intermediate

parallelTopology:
	./ns3 run scratch/parallel-cross-traffic

alternativeTopology:
	./ns3 run scratch/alternative-topology

simulateAndMeasureDelay1:
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-one.csv
	python3 k_means.py probe-gaps-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0

simulateAndMeasureDelay3:
	./ns3 run scratch/three-intermediate -- 64 800 400 1000
	python3 filter_packets.py probes-three.csv three-intermediate-4-1.pcap 800
	python3 gap_measurement.py probes-three.csv probe-gaps-three.csv
	python3 k_means.py probe-gaps-three.csv

createFullGraphData1:
	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 real_delay.py queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv
	python3 k_means.py probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 real_delay.py queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv
	python3 k_means.py probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 real_delay.py queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv
	python3 k_means.py probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 real_delay.py queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv
	python3 k_means.py probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	python3 real_delay.py queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py probes-one.csv probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv
	python3 k_means.py probe-gaps-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP).csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4