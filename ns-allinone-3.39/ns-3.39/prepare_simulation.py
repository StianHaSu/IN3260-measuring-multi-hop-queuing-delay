import sys
import graph_utils

"""
This script initializes a new table (csv file) if it does not aldready  
exists. Otherwise it adds a new row to the table, to make it ready for a 
new simulation.
This will then be filled with the data from five simulations of the same
settings (packet sizes and link capsity).
"""

#The name of the csv file to be made
graph_file_name = sys.argv[1]

#The row to create, if 0, it creates a new table
row_to_create = int(sys.argv[2])

heading_packet = int(sys.argv[3])   #Packet size of the heading packet
trailing_packet = int(sys.argv[4])  #Packet size of ther trailing packet
traffic_packet = int(sys.argv[5])   #Packet size of the cross traffic packets
link_capacity = int(sys.argv[6])    #Link capasity during the simulations


#Create a new table-entry
if row_to_create == 0:
    graph_utils.create_new_table(graph_file_name, 
                    heading_packet,
                    trailing_packet,
                    traffic_packet,
                    link_capacity)
    
#Create a new row
else:
    graph_utils.create_new_row(graph_file_name, 
                    heading_packet,
                    trailing_packet,
                    traffic_packet,
                    link_capacity)  