from sklearn.neighbors import KernelDensity
import numpy as np
import pandas as pd
import sys
import matplotlib.pyplot as plt
from scipy.signal import find_peaks
from graph_utils import update_value


def plot_kde_graph(x, density, peak_to_gap_map, compression, no_change, de_compression, information):
    plt.plot(x, density, color="black")

    co = plt.plot(compression, peak_to_gap_map[compression], "o", color="red")
    nc = plt.plot(no_change, peak_to_gap_map[no_change], "X", color="blue")
    de = plt.plot(de_compression, peak_to_gap_map[de_compression], "D", color="limegreen")

    plt.title(
        f"Trailing packet: {information[0]} Cross traffic packet: {information[1]} Link capacity: {information[2]}")
    plt.legend([co[0], nc[0], de[0]], ["Compression peak", "No change peak", "Decompression peak"], loc="upper right")
    plt.ylabel("Distribution weight")
    plt.xlabel("Probe gap in microseconds")
    plt.show()


def main():
    # Input data file (probe gaps)
    data_file = sys.argv[1]

    # The csv file for the result
    # output_file = sys.argv[2]

    # The row to update
    # row = int(sys.argv[3])

    data = pd.read_csv(data_file)['Gap']
    data = data.to_numpy()

    # Turning data from seconds into microseconds
    data *= 10 ** 6
    data = data.reshape(-1, 1)

    # Running the kernel density estimation algorithm with gaussian kernel
    kde = KernelDensity(kernel='gaussian', bandwidth=0.5).fit(data)

    # Distributing the data evenly, padding on both sides
    x = np.linspace(min(data) - 5, max(data) + 5, len(data))
    x = x.reshape(-1, 1)

    # Scoring the based on the kernel density estimation
    scores = kde.score_samples(x)

    # Getting the density
    density = np.exp(scores)

    # Using the scipy.signal library to find the peaks in the resulting density graph
    peaks, _ = find_peaks(density)

    peak_to_gap_map = {}

    # Mapping the x values to y value, and vice versa
    count = 0
    for peak_y in density[peaks]:
        peak_to_gap_map[peak_y] = x[peaks][count][0]
        peak_to_gap_map[(x[peaks][count][0])] = peak_y
        count += 1

    # Sorting the peaks descendingly, and keeping the three largest peaks
    kernel_peaks = np.sort(density[peaks])[::-1][0:3]
    print(kernel_peaks)

    # The modalities in the data-set
    modalities = [peak_to_gap_map[kernel_peaks[0]],
                  peak_to_gap_map[kernel_peaks[1]],
                  peak_to_gap_map[kernel_peaks[2]]]

    # Soring the modalities
    modalities = np.sort(modalities)

    # Marking each of the peaks as either compression, no-change or decompression
    compression = modalities[0]
    no_change = modalities[1]
    de_compression = modalities[2]

    # Getting the weight based on the height of the peaks
    compression_weight = (peak_to_gap_map[compression] /
                          (peak_to_gap_map[compression] + peak_to_gap_map[de_compression]))

    de_compression_weight = (peak_to_gap_map[de_compression] /
                             (peak_to_gap_map[compression] + peak_to_gap_map[de_compression]))

    # Calculating the individual queuing delays, based on the center of each peak, and the weight of the group
    delay_compression = (no_change - compression) * compression_weight
    delay_de_compression = (de_compression - no_change) * de_compression_weight

    total_delay = delay_compression + delay_de_compression

    # update_value(output_file, row, "KDE_d", ("%.2f" % total_delay))

    print("Total delay in micro seconds: ", total_delay)

    if len(sys.argv) == 2:
        information = data_file.split("/")[-1].split("-")
        plot_kde_graph(x, density, peak_to_gap_map, compression, no_change, de_compression, information)


if __name__ == '__main__':
    main()
