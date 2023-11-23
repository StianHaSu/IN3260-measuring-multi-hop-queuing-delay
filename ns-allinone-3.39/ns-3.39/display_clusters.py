import matplotlib.pyplot as plt
import sys
import pandas as pd
import numpy as np

title_size = 35
font_size = 22


def display_cluster(file):
    clusters = pd.read_csv(file)
    clusters['Gap'] *= 10**6
    clusters = clusters.drop("Nr", axis=1)

    y1_values = []
    y2_values = []
    y3_values = []

    for _, line in clusters.iterrows():
        bits = line['Cluster']

        match int(bits):
            case 0:
                y1_values.append(float(line['Gap']))
            case 1:
                y2_values.append(float(line['Gap']))
            case 2:
                y3_values.append(float(line['Gap']))

    combined_clusters = [y1_values, y2_values, y3_values]
    combined_clusters.sort()

    compression = plt.scatter(range(len(combined_clusters[0])), combined_clusters[0], marker="o", color="red")
    no_change = plt.scatter(range(len(combined_clusters[1])), combined_clusters[1], marker="x", color="blue")
    de_compression = plt.scatter(range(len(combined_clusters[2])), combined_clusters[2], marker="D", color="limegreen")

    shade1 = plt.fill_between(x=range(len(combined_clusters[0])+20), y1=min(combined_clusters[0])-2,
                     y2=max(combined_clusters[0])+2, color="red", alpha=0.1, hatch="---")

    shade2 = plt.fill_between(x=range(len(combined_clusters[1]) + 20), y1=min(combined_clusters[1]) - 2,
                     y2=max(combined_clusters[1]) + 2, color="blue", alpha=0.1, hatch="|||")

    shade3 = plt.fill_between(x=range(len(combined_clusters[2]) + 20), y1=min(combined_clusters[2]) - 2,
                     y2=max(combined_clusters[2]) + 2, color="limegreen", alpha=0.1, hatch="///")

    information = file.split("/")[-1].split("-")

    print(min(clusters['Gap']))
    for i in range(int(min(clusters['Gap'])), int(max(clusters['Gap'])), 10):
        plt.fill_between([0, max([len(y1_values), len(y2_values), len(y3_values)])+50], i, i + 5, facecolor="gray", alpha=0.2)

    plt.yticks(np.arange(min(clusters['Gap']) - 5, max(clusters['Gap']) + 5, step=5), fontsize=font_size)
    plt.xticks(np.arange(0), fontsize=font_size)
    plt.xlim(0, max([len(y1_values), len(y2_values), len(y3_values)])+50)
    plt.ylabel("Intra probe gap in microseconds", fontsize=font_size)
    plt.grid()
    plt.title(f"Trailing packet: {information[0]} Cross traffic packet: {information[1]} "
              f"Link capacity: {information[2]}",fontsize=title_size)
    plt.legend([shade1, shade2, shade3], ["Compression", "No change", "Decompression"])
    plt.show()


def main():
    display_cluster(sys.argv[1])


if __name__ == "__main__":
    main()

