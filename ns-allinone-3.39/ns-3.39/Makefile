build:
	./ns3 configure -d debug --enable-examples --enable-tests
	./ns3 build

oneIntermediate:
	./ns3 run scratch/one-intermediate-node

threeIntermediate:
	./ns3 run scratch/three-intermediate-nodes
	
cleanOne:
	rm one-intermediate-node-*

cleanThree:
	rm three-intermediate-nodes-*

threeIntermediateVar:
	./ns3 run scratch/three-intermediate-varying-size

cleanThreeVar:
	rm three-intermediate-nodes-var-*