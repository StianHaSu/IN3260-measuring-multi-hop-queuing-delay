LEADING_PACKET = 64
TRAILING_PACKET = 800
TRAFFIC_PACKET = 200
LINK_CAP = 100

#Used for the the three intermediate nodes simulation
NODE_TO_MEASURE = 3

build:
	./ns3 configure -d debug --enable-examples --enable-tests
	./ns3 build

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

completeSimulation1:
	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 0
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-one-intermediate-2-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probe-gaps.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 1
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-one-intermediate-2-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probe-gaps.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 2
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-one-intermediate-2-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probe-gaps.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 3
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-one-intermediate-2-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probe-gaps.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/one-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 4
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-queue-size.csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-one-intermediate-2-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probes-one.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probe-gaps.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4

	mkdir $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)
	mv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-* $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)

completeSimulation3:
	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 0 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/three-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 0 $(NODE_TO_MEASURE)

	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-three-intermediate-4-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probe-gaps-three.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probe-gaps-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 0

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 1 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/three-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 1 $(NODE_TO_MEASURE)
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-queue-size-$(NODE_TO_MEASURE).csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 1
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-three-intermediate-4-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probe-gaps-three.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probe-gaps-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 1

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 2 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/three-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 2 $(NODE_TO_MEASURE)
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-queue-size-$(NODE_TO_MEASURE).csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 2
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-three-intermediate-4-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probe-gaps-three.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probe-gaps-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 2

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 3 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/three-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 3 $(NODE_TO_MEASURE)
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-queue-size-$(NODE_TO_MEASURE).csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 3
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-three-intermediate-4-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probe-gaps-three.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probe-gaps-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 3

	python3 prepare_simulation.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 4 $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP)
	./ns3 run scratch/three-intermediate -- $(LEADING_PACKET) $(TRAILING_PACKET) $(TRAFFIC_PACKET) $(LINK_CAP) 4 $(NODE_TO_MEASURE)
	python3 real_delay.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-queue-size-$(NODE_TO_MEASURE).csv $(TRAFFIC_PACKET) $(LINK_CAP) $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 4
	python3 filter_packets.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-three-intermediate-4-1.pcap $(TRAILING_PACKET)
	python3 gap_measurement.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probes-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probe-gaps-three.csv
	python3 k_means.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probe-gaps-three.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results-three.csv 4

	mkdir three-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-$(NODE_TO_MEASURE)
	mv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-* three-$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-$(NODE_TO_MEASURE)


#Temporary to fix standard deviation
fixMeasurements1:
	python3 k_means.py ./$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-0-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 0
	python3 k_means.py ./$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-1-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 1
	python3 k_means.py ./$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-2-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 2
	python3 k_means.py ./$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-3-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 3
	python3 k_means.py ./$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-4-probe-gaps.csv $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 4


displayGraph1:
	python3 graph_utils.py $(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)/$(TRAILING_PACKET)-$(TRAFFIC_PACKET)-$(LINK_CAP)-results.csv 5

