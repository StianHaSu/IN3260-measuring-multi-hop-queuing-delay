import sys
import pandas as pd
from sklearn.cluster import KMeans
import display_clusters

prefix = sys.argv[1]
suffix = ""

if len(sys.argv) > 2:
    suffix += "-three"

file1 = pd.read_csv(prefix+f"-0-probe-gaps{suffix}.csv")
file2 = pd.read_csv(prefix+f"-1-probe-gaps{suffix}.csv")
file3 = pd.read_csv(prefix+f"-2-probe-gaps{suffix}.csv")
file4 = pd.read_csv(prefix+f"-3-probe-gaps{suffix}.csv")
file5 = pd.read_csv(prefix+f"-4-probe-gaps{suffix}.csv")

allGaps = pd.concat([file1, file2, file3, file4, file5])

kmeans = KMeans(n_clusters=3, init='k-means++', random_state=0)
clusters = kmeans.fit_predict(allGaps)
allGaps['Cluster'] = clusters

file_out = prefix+f"-cluster{suffix}.csv"

allGaps.to_csv(file_out, encoding='utf-8')
