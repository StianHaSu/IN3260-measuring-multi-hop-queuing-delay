# User guide for queueing delay measurement

## Introduction
This project consist of multiple different parts, but can be broken into three main categories:  
- NS3 Simulations which is responsible for creating the data that we analyze. Of which there are two programs:  
    - one-intermediate.cc which consists of a path with a single intermediate node.
    - three-intermediate.cc which consists of a path with three intermediate nodes.
- Data processing scrips, which transforms and measured the data captured in the NS3 simulations:    
    - ***prepare_simulation.py*** which either creates a new csv file/table, or adds a new row to an existing table.  
    - ***real_delay.py*** which calculates the delay and standard deviation based on the actual queue sizes of a given interface  
    - ***filter_packets.py*** Which filters out the probing packets from the other packets   
    - ***k_means.py*** Which uses the kmeans++ algorithm to estimate the queueing delays   
- Data files (csv and pcap), which contains data about the simulations, and different steps in the data processing.  
    All these files starts with a prefix which is defined like this:  
    - [trailing packet size]-[cross traffic packet size]-[link capasity (in Mbps)]-[simulation run]  
    Then a suffix based on which part of measurement process it belongs to:  
    - results.csv contains packet information, link capasity, measured delay, measured standard deviation, the real delay, and real standard deviation.  
    - [one/three]-intermediate-1-2.pcap which is the tracefiles created by the simulation itself, and contain information about all the packets sent. 
    - queue-size.csv


## How to run   
1. Navigate to the ns-3.39 directory.  
2. Run "make build" which builds the project and enable debugging and testing.  
3. In the top of the Makefile you will see four variables:  
    - LEADING_PACKET  
    - TRAILING_PACKET  
    - TRAFFIC_PACKET  
    - LINK_CAP  

    Change the values of these to simulate different combinations of packet sizes and link capasities.
4. Run the simulation you want:
    - "make completeSimulation1" will run the entire pipeline on a signle hop topology  
    (Five simulations with 500 packet pairs each).  
    - "make simulateAndMeasureDelay1" will run a single simulation with 500 packet pairs.   
    This is mainly used for testing purposes.

## The pipeline  
