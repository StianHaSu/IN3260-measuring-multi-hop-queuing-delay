import math

from sklearn.neighbors import KernelDensity
import numpy as np
import pandas as pd
import sys
import matplotlib.pyplot as plt
from scipy.signal import find_peaks
from graph_utils import update_value, plot_kde_graph
from scipy.optimize import fsolve

data_file = sys.argv[1]
data_from_file = pd.read_csv(data_file)['Gap']
data = data_from_file.to_numpy()
data *= 10 ** 6
data = data.reshape(-1, 1)


def check_if_in_group(x1, x2, datapoint):
    if x1 < datapoint < x2:
        return True
    if datapoint == x1 or datapoint == x2:
        return True

    return False


def calculate_variability(roots, mean):
    variability = 0
    elements = 0
    for _, element in data_from_file.items():
        if (check_if_in_group(roots["compression_root_1"], roots["compression_root_2"], float(element)) or
            check_if_in_group(roots["de_compression_root_1"], roots["de_compression_root_2"], float(element)) or
            check_if_in_group(roots["no_change_root_1"], roots["no_change_root_2"], float(element))
        ):
            variability += (element - mean) ** 2
            elements += 1

    variability = math.sqrt((variability / elements))
    return variability


def kde_func(x):
    x_reshaped = np.array([x])
    kde = KernelDensity(kernel='gaussian', bandwidth=0.5).fit(data)
    return np.exp(kde.score_samples(x_reshaped))


# This function makes the finding of zero points in the graph more reliable,
# Because of the limitations of floating point numbers
def filter_function(x):
    return kde_func(x) - 0.0001


def main():
    # The csv file for the result
    output_file = sys.argv[2]

    # The row to update
    row = int(sys.argv[3])

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

    update_value(output_file, row, "KDE_d", ("%.2f" % total_delay))

    root1_compression = fsolve(filter_function, compression - 0.5)
    root2_compression = fsolve(filter_function, compression + 0.5)

    root1_no_change = fsolve(filter_function, no_change - 0.5)
    root2_no_change = fsolve(filter_function, no_change + 0.5)

    root1_de_compression = fsolve(filter_function, de_compression - 0.5)
    root2_de_compression = fsolve(filter_function, de_compression + 0.5)

    roots = {
        "compression_root_1": root1_compression,
        "compression_root_2": root2_compression,
        "de_compression_root_1": root1_de_compression,
        "de_compression_root_2": root2_de_compression,
        "no_change_root_1": root1_no_change,
        "no_change_root_2": root2_no_change
    }

    print(roots.values())

    variability = calculate_variability(roots, no_change)

    print("Variability: ", variability)
    update_value(output_file, row, "KDE_v", ("%.2f" % variability))
    print("Total delay in micro seconds: ", total_delay)

    if len(sys.argv) >= 4:
        information = data_file.split("/")[-1].split("-")
        information.append("" if len(sys.argv) < 5 else sys.argv[4])
        plot_kde_graph(x, density, peak_to_gap_map, compression, no_change, de_compression, information, roots)


if __name__ == '__main__':
    main()
