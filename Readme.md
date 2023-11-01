# Measuring queuing delays on a multi hop path

## Tasks

1. [Get to know ns-3](https://www.nsnam.org/documentation/)  
2. Set up a topology with a single intermediate node in ns-3  ( [example script](https://www.nsnam.org/docs/release/3.39/tutorial/html/conceptual-overview.html#a-first-ns-3-script), see [first.cc](https://www.nsnam.org/docs/release/3.19/doxygen/first_8cc_source.html) example)       
4. Set up topology with multiple intermediate nodes in ns-3  
5. Test step 3 and 4 by sending fixed sized packets (see line 61 in the first.cc file)
6. Test step 3 and 4 by sending different packet sizes  (try different Ph and Pt sizes from [1])
7. Check that packets sent are the correct size under transmission (enable pcap tracing in ns3 using [enablepcap function line 109](https://www.nsnam.org/docs/release/3.19/doxygen/second_8cc_source.html) and then read pcap files with [wireshark](https://www.wireshark.org))
8. Measure single hop queuing delay
9. Set TTL for leading packets on multi hop topology (COMMENT: I don't think we need to play with TTL fields. For the redundant packet Pr, just set the destination address to *router R*.)
10. Measure cumulative queuing delay on multihop path
11. Build queues on the intermediate nodes  

...

### Week 38  
- [x] Build a queue on a signle hop topology 
- [x] Filter out probing packet pairs on the receiving node 
- [x] Measure gap between probing pairs 
- [x] Use k-means++ to measure queueing delay on a signle interface 

### Week 39
- [x] Run simulation with different packet sizes 
- [x] Set up topology with three intermediate nodes 
- [x] Build queues on the three intermediate nodes with equal patterns 
- [x] Run simulation with a redundant leading packet with a ttl 
- [x] Measure queueing delay on the last intermediate node 
- [ ] Measure cumulative queueing delay on three intermediate nodes.

### Week 40
Working on automating the simulation and measuring proccess. This included making a pipeline  
that automatically runs the filtering, gap measuring, and kmeans programs automtically after each simulation run.  

### Week 41  
- [x] Make a system that runs the entire simulation proccess, and then creates complete graph data.
- [x] Create graph data for all 100Mbps combinations.
- [ ] Create graph data for all 1Gbps combinations. (This will not be done by wednesday, as the simulations are taking to long.)

### Week 43 
- Working on getting the multihop pipline in place.
- Was previously tracing wrong interface, now fixed.
- Having more doubt about the standars deviation:
  - We are using the queuing delay as the mean, and using gaps from the compression and decompression clusters.
    But the queuing delay is not the mean of the data-set. We are comparing only a part of the measured gaps (the queuing delay)
    and comparing it to "full" gaps to measure standard deviation.
    Does it maybe make more sense to use the no-change centroid as the mean, or maybe the actual mean of the gaps?
- Making graphs for single hop case


### Week 44
- Started on multi-hop simulations.
- Started on the presentation for the course examination.
- Started making graphs for multi-hop case
  - [x] 800-100-100
  - [x] 800-200-100
  - [ ] 800-300-100
  - [ ] 1000-100-100
  - [ ] 1000-200-100
  - [ ] 1000-300-100
  - [ ] 1400-100-100
  - [ ] 1400-200-100
  - [ ] 1400-300-100

# User guide for queueing delay measurement

## File names and naming convetions
This project consist of multiple different parts, but can be broken into three
main categories:  
- NS3 Simulations which is responsible for creating the data that we analyze. Of
  which there are two programs:  
    - one-intermediate.cc which consists of a path with a single intermediate
      node.
    - three-intermediate.cc which consists of a path with three intermediate
      nodes.
- Data processing scrips, which transforms and measured the data captured in the
  NS3 simulations:    
    - ***prepare_simulation.py*** which either creates a new csv file/table, or
      adds a new row to an existing table.  
    - ***real_delay.py*** which calculates the delay and standard deviation
      based on the actual queue sizes of a given interface  
    - ***filter_packets.py*** Which filters out the probing packets from the
      other packets   
    - ***k_means.py*** Which uses the kmeans++ algorithm to estimate the
      queueing delays   
- Data files (csv and pcap), which contains data about the simulations, and
  different steps in the data processing.  
    All these files starts with a prefix which is defined like this:  
    - ***[trailing packet size]-[cross traffic packet size]-[link capasity (in
      Mbps)]-[simulation run]***  
    Then a suffix based on which part of measurement process it belongs to:  
    - ***results.csv*** contains packet information, link capasity, measured
      delay, measured standard deviation, the real delay, and real standard
      deviation.  
    - ***[one/three]-intermediate-1-2.pcap*** which is the tracefiles created by
      the simulation itself, and contain information about all the packets sent. 
    - ***queue-size.csv*** which is a measurement of the size of the queue which
      is done during the simulation. This value is used to calculate the real
      delay/standard deviation.  
    - ***probes-[one/three].csv*** contains all the timestamps for all the
      probing packets, after they have been filtered out in
      ***filter_packets.py***  
    - ***probe-gaps.csv*** which contains the measured distance between pairs of
      heading and trailing packets, this is used to estimate the queuing delay
      and standard deviation in ***k_means.py***

## How to run   
1. Navigate to the ns-3.39 directory.  
2. Run "make build" which builds the project and enable debugging and testing.  
3. In the top of the Makefile you will see four variables:  
    - LEADING_PACKET  
    - TRAILING_PACKET  
    - TRAFFIC_PACKET  
    - LINK_CAP  

    Change the values of these to simulate different combinations of packet
    sizes and link capasities.
4. Run the simulation you want:
    - "make completeSimulation1" will run the entire pipeline on a signle hop
      topology  
    (Five simulations with 500 packet pairs each).  
    - "make simulateAndMeasureDelay1" will run a single simulation with 500
      packet pairs.   
    This is mainly used for testing purposes.

## The pipeline
![Pipeline](pipeline.png)

1. Set packet sizes and link capasity in the top of the Makefile  
2. Run a simulation (Make (completeSimulation1))  
3. prepare_simulation.py runs 
    - (if this is the first simulation run) Creates a file with the naming
      convention mentioned in ***File names and namin convetions***  
    - Updates the row in the file created, on the row corresponding to the
      simulation run with packet informatiom and link capasity.  
3. [one/three]-intermediate.cc runs  
    - 500 probing pairs are sent with with a distance of 50 - 250 ms between
      each pair.  
    - Queue sizes are measured every 5 micro seconds, 400 times and the queue
      size at each measurement is written to the ***queue-size.csv*** file.  
    - All packets being sent (including cross traffic packets) are traced and
      results in ***[trailing packet size]-[cross traffic packet size]-[link
      capasity (in Mbps)]-[simulation run]-one-intermediate-1-2.pcap*** which is
      all the packets that reaches node threes interface connected to node two.  
4. filter_packets.py runs  
    - All packets with size 64 bytes (Always the heading packet size) or the
      size of the trailing packet is filtered out, and the timestamp of their
      arrival at node 3 are written to the file probe file described in ***File
      names and namin convetions***.  
5. gap_measurement.py runs 
    - The gap between pairs of heading and trailing packets are calculated and
      written to the probe-gaps.csv file described in ***File names and namin
      convetions***.  
6. k_means.py runs  
    - The propagation delay of the trailing packet is subtracted from the
      measured gaps in the probe-gaps.csv file.  
    - The gaps are split into three clusters using the kmeans++ algorithm.   
    - The clusters are filtered, where all gaps in the cluster with a frequency
      <20% is removed.  
    - The clusters are reassigned with the filtered data.  
    - Queueing delay and standard deviation is calculated 
    - The results are written to the results.csv file, on the row corresponding
to the simulation round.   
7. 3 to 6 are repeated four more times.
8. Dircetory with name ***[trailing packet size]-[cross traffic packet size]-[link capasity (in
      Mbps)]***6 is created. If the simulation is a three intermediate simulation, the folder is prefixed by "three-"
9. All files created during the simulation run is moved into the directory created in step 8. 

## Clarifications and possible confusion
1. If you see that the packet sizes are 30 bytes less than you expect in the
simulation, this is most likely because the program subtracts 30 bytes from the
packet sizes given as input.  
The reason for this, is that when packets are sent, headers with a combined size
of 30 bytes are  
added to the packet. This ensures that the final packet size sent over the links
are the excact  
same size as the input.

## References

[1] Ricker, Travis, et al. "A Machine Learning Approach to Estimating Queuing Delay on a Router over a Single-Hop Path." ICC 2022-IEEE International Conference on Communications. IEEE, 2022. <br />
[2] K. Salehin, K. W. Kwon and R. Rojas-Cessa, "A Simulation Study of the Measurement of Queueing Delay Over End-to-End Paths," in IEEE Open Journal of the Computer Society, vol. 1, pp. 1-11, 2020. <br />
[3] K. M. Salehin and R. Rojas-Cessa, "Scheme for Measuring Queueing Delay of a Router Using Probe-Gap Model: The Single-Hop Case," in IEEE Communications Letters, vol. 18, no. 4, pp. 696-699, April 2014.
