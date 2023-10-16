# User guide for queueing delay measurement

## Introduction
This project consist of multiple different parts, but can be broken into three main categories:  
- NS3 Simulations which is responsible for creating the data that we analyze. Of which there are two programs:  
    - one-intermediate.cc which consists of a path with a single intermediate node.
    - three-intermediate.cc which consists of a path with three intermediate nodes.
- Data processing scrips, which transforms and measured the data captured in the NS3 simulations:  
    - ***prepare_simulation.py*** which either creates a new csv file/table, or adds a new row to an existing table.
    - ***real_delay.py*** which calculates the delay and standard deviation based on the actual queue sizes of a given interface
    - ***filter_packets.py***
