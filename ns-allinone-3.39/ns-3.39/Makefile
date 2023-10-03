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
	./ns3 run scratch/one-intermediate -- 64 800 900 1000
	python3 filter_packets.py probes-one.csv one-intermediate-1-2.pcap
	python3 gap_measurement.py probes-one.csv probe-gaps-one.csv
	python3 k_means.py probe-gaps-one.csv

simulateAndMeasureDelay3:
	./ns3 run scratch/three-intermediate -- 64 800 900 100
	python3 filter_packets.py probes-three.csv three-intermediate-4-1.pcap
	python3 gap_measurement.py probes-three.csv probe-gaps-three.csv
	python3 k_means.py probe-gaps-three.csv