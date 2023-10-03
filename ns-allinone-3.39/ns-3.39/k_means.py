import pandas as pd
from sklearn.cluster import KMeans
import numpy as np
from sklearn.preprocessing import StandardScaler
import sys

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
    data = pd.read_csv(file)

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

print("result size: ",len(result))

#Fit the new data after filtering
kmeans2 = KMeans(n_clusters=3, init='k-means++', random_state=0)
clusters2 = kmeans2.fit_predict(result)
result['Cluster'] = clusters2

grouped_clusters2 = result.groupby('Cluster')

#Get the centroids of each cluster
centroids = kmeans2.cluster_centers_

#Map each centroids value to the size of its cluster
centroid_map = {}
centroid_map[centroids[0,0]] = len(grouped_clusters2.get_group(0))
centroid_map[centroids[1,0]] = len(grouped_clusters2.get_group(1))
centroid_map[centroids[2,0]] = len(grouped_clusters2.get_group(2))

#Sort centroids into no-change, compression and decompression
for i in range(1,3):
    j = i
    while j > 0 and centroids[j-1,0] > centroids[j, 0]:
        centroids[j, :], centroids[j-1, :] = centroids[j-1, :].copy(), centroids[j, :].copy() 
        j -= 1

print("\n")

#Print out the value of each centroid, in seconds
print("Compression centroid: ", centroids[0,0])
print("No change centroid: ", centroids[1,0])
print("Decompression centroid: ", centroids[2,0])

#Calculate delay due to compression and decompression
delay_co = centroids[1,0]-centroids[0,0]
delay_de = centroids[2,0]-centroids[1,0]

print("\n")

print("Delay compression: ", delay_co)
print("Delay decompression: ", delay_de)

print("\n")

total = 0

#Calculate the weighted cluster size of the compression and decompression clusters
s_co = centroid_map[centroids[0,0]] / (centroid_map[centroids[0,0]] + centroid_map[centroids[2,0]])
s_de = centroid_map[centroids[2,0]] / (centroid_map[centroids[0,0]] + centroid_map[centroids[2,0]])

total += delay_co*s_co
total += delay_de*s_de

#Print out the resulting queuing delay in microseconds
print(f"Queueing delay: {total*(10**6)} micro seconds")