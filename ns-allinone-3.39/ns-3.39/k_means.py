import pandas as pd
from sklearn.cluster import KMeans
import numpy as np
from sklearn.preprocessing import StandardScaler

def filter_group(group):
    group_size = len(group)
    counts = group['Gap'].value_counts()

    for value, count in counts.items():
        if count < group_size*0.2:
            group = group[group['Gap'] != value]
            
    return group

def create_groups(file):
    data = pd.read_csv(file)

    kmeans = KMeans(n_clusters=3, init='k-means++', random_state=0)
    clusters = kmeans.fit_predict(data)

    data['Cluster'] = clusters

    return data.groupby('Cluster')

grouped_clusters = create_groups("probe_gaps.csv")

one = grouped_clusters.get_group(0)
two = grouped_clusters.get_group(1)
three = grouped_clusters.get_group(2)

one = filter_group(one)
two = filter_group(two)
three = filter_group(three)

result = pd.concat([one, two, three], ignore_index=True)
result = result.drop('Cluster', axis=1)

kmeans2 = KMeans(n_clusters=3, init='k-means++', random_state=0)
clusters2 = kmeans2.fit_predict(result)
result['Cluster'] = clusters2

grouped_clusters2 = result.groupby('Cluster')

centroids = kmeans2.cluster_centers_

centroid_map = {}
centroid_map[centroids[0,1]] = len(grouped_clusters2.get_group(0))
centroid_map[centroids[1,1]] = len(grouped_clusters2.get_group(1))
centroid_map[centroids[2,1]] = len(grouped_clusters2.get_group(2))

#Sort centroids into no-change, compression and decompression
for i in range(1,3):
    j = i
    while j > 0 and centroids[j-1,1] > centroids[j, 1]:
        centroids[j, :], centroids[j-1, :] = centroids[j-1, :].copy(), centroids[j, :].copy() 
        j -= 1

print("\n")

print("Compression centroid: ", centroids[0,1])
print("No change centroid: ", centroids[1,1])
print("Decompression centroid: ", centroids[2,1])

delay_co = centroids[1,1]-centroids[0,1]
delay_de = centroids[2,1]-centroids[1,1]

print("\n")

print("Delay compression: ", delay_co)
print("Delay decompression: ", delay_de)

print("\n")

total = 0

s_co = centroid_map[centroids[0,1]] / (centroid_map[centroids[0,1]] + centroid_map[centroids[2,1]])
s_de = centroid_map[centroids[2,1]] / (centroid_map[centroids[0,1]] + centroid_map[centroids[2,1]])

total += delay_co*s_co
total += delay_de*s_de

print("\n")

print(f"Queueing delay: {total*(10**6)} micro seconds")


