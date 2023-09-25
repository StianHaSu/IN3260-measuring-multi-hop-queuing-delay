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

simulateAndMeasureDelay:
	./ns3 run scratch/one-intermediate
	python3 filter_packets.py
	python3 gap_measurement.py
	python3 k_means.py