import pandas as pd
from sklearn.cluster import KMeans
import numpy as np
from sklearn.preprocessing import StandardScaler
from graph_utils import update_value 
import sys
import math
from Cluster import CustomCluster

output_file = sys.argv[2]
row_to_update = int(sys.argv[3])

def calculate_vaiability(cluster_co, cluster_dc, queueing_delay):    
    variability_co = 0
    for _, element in cluster_co.cluster.iterrows():
        variability_co += ((float(element['Gap'])*10**6)-queueing_delay)**2

    variability_dc = 0
    for _, element in cluster_dc.cluster.iterrows():
        variability_dc += ((float(element['Gap'])*10**6)-queueing_delay)**2

    combined_variability = math.sqrt((variability_co + variability_dc)/(len(cluster_dc.cluster) + len(cluster_co.cluster)-1))

    return combined_variability

#Filters out intra-probe gaps that has a frequency 
#of less than 20% in a given cluster
def filter_group(group):
    group_size = len(group)
    counts = group['Gap'].value_counts()

    for value, count in counts.items():
        if count < group_size*0.2:
            group = group[group['Gap'] != value]
            
    return group

#Creates clusters from an input file
def create_groups(file):
    packet_info = file.split("-")
    data = pd.read_csv(file)
    
    #Packet size * 8 / (link cap * 10**6)
    data['Gap'] = data['Gap'] - (float(packet_info[0])*8)/(float(packet_info[2])*10**6)
    kmeans = KMeans(n_clusters=3, init='k-means++', random_state=0)
    clusters = kmeans.fit_predict(data)
    
    data['Cluster'] = clusters
    
    return data.groupby('Cluster')

grouped_clusters = create_groups(sys.argv[1])

#Get the clusters
one = grouped_clusters.get_group(0)
two = grouped_clusters.get_group(1)
three = grouped_clusters.get_group(2)

#Filter out members of each cluster with a frequency of < 20%
one = filter_group(one)
two = filter_group(two)
three = filter_group(three)

#Concatinate the groups to do another k-means clustering
result = pd.concat([one, two, three], ignore_index=True)
result = result.drop('Cluster', axis=1)

print("result size: ", len(result))

#Fit the new data after filtering
kmeans2 = KMeans(n_clusters=3, init='k-means++', random_state=0)
clusters2 = kmeans2.fit_predict(result)
result['Cluster'] = clusters2

grouped_clusters2 = result.groupby('Cluster')

#Get the centroids of each cluster
centroids = kmeans2.cluster_centers_

#Getting the processed clusters
processed_cluster_1 = grouped_clusters2.get_group(0)
processed_cluster_2 = grouped_clusters2.get_group(1)
processed_cluster_3 = grouped_clusters2.get_group(2)

cluster1 = CustomCluster(centroids[0,0], processed_cluster_1)
cluster2 = CustomCluster(centroids[1,0], processed_cluster_2)
cluster3 = CustomCluster(centroids[2,0], processed_cluster_3)

cluster_map = {
    cluster1.centroid : cluster1,
    cluster2.centroid : cluster2,
    cluster3.centroid : cluster3 
}

cluster_list = [cluster1.centroid, cluster2.centroid, cluster3.centroid]
cluster_list.sort()

print("\n")

co = cluster_map[cluster_list[0]]
nc = cluster_map[cluster_list[1]]
de = cluster_map[cluster_list[2]]

#Print out the value of each centroid, in seconds
print("Compression centroid: ", co.centroid)
print("No change centroid: ", nc.centroid)
print("Decompression centroid: ", de.centroid)

#Calculate delay due to compression and decompression
delay_co = nc.centroid-co.centroid
delay_de = de.centroid-nc.centroid

print("\n")

print("Delay compression: ", delay_co)
print("Delay decompression: ", delay_de)

print("\n")

total = 0

#Calculate the weighted cluster size of the compression and decompression clusters
s_co = len(co.cluster) / (len(co.cluster) + len(de.cluster))
s_de = len(de.cluster) / (len(co.cluster) + len(de.cluster))

total += delay_co*s_co
total += delay_de*s_de

total *= 10**6

#Print out the resulting queuing delay in microseconds
print(f"Queueing delay: {total} micro seconds")

variability = calculate_vaiability(co, de, total)

print("\n")

print(f"Variability: {variability}")

update_value(output_file, row_to_update, "M_d", "%.2f" % total)
update_value(output_file, row_to_update, "M_v", "%.2f" % variability)