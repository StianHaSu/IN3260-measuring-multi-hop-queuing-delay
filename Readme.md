# Measuring queuing delays on a multi hop path

## Tasks

1. [Get to know ns-3](https://www.nsnam.org/documentation/)  
2. Set up a topology with a single intermediate node in ns-3  [example script](https://www.nsnam.org/docs/release/3.39/tutorial/html/conceptual-overview.html#a-first-ns-3-script), see [first.cc](https://www.nsnam.org/docs/release/3.19/doxygen/first_8cc_source.html) example        
4. Set up topology with multiple intermediate nodes in ns-3  
5. Test step 3 and 4 by sending fixed sized packets (see line 61 in the first.cc file)
6. Test step 3 and 4 by sending different packet sizes  (try different Ph and Pt sizes from [1])
7. Check that packets sent are the correct size under transmission (enable pcap tracing in ns3 using [enablepcap function line 109](https://www.nsnam.org/docs/release/3.19/doxygen/second_8cc_source.html) and then read pcap files with [wireshark](https://www.wireshark.org))
8. Measure single hop queuing delay
9. Set TTL for leading packets on multi hop topology
10. Measure cumulative queuing delay on multihop path
11. Build queues on the intermediate nodes  

...

## References

[1] Ricker, Travis, et al. "A Machine Learning Approach to Estimating Queuing Delay on a Router over a Single-Hop Path." ICC 2022-IEEE International Conference on Communications. IEEE, 2022.
