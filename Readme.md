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

## References

[1] Ricker, Travis, et al. "A Machine Learning Approach to Estimating Queuing Delay on a Router over a Single-Hop Path." ICC 2022-IEEE International Conference on Communications. IEEE, 2022. <br />
[2] K. Salehin, K. W. Kwon and R. Rojas-Cessa, "A Simulation Study of the Measurement of Queueing Delay Over End-to-End Paths," in IEEE Open Journal of the Computer Society, vol. 1, pp. 1-11, 2020. <br />
[3] K. M. Salehin and R. Rojas-Cessa, "Scheme for Measuring Queueing Delay of a Router Using Probe-Gap Model: The Single-Hop Case," in IEEE Communications Letters, vol. 18, no. 4, pp. 696-699, April 2014.
