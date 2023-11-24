import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import sys

title_size = 35
font_size = 22


# Updates the value of a given row an column
def update_value(file, row, column, value):
    df = pd.read_csv(file)
    df.at[row, column] = value
    df.to_csv(file, index=False)


# Plot a kde graph
def plot_kde_graph(x, density, peak_to_gap_map, compression, no_change, de_compression, information, roots):

    # Plot the KDE graph itself
    plt.plot(x, density, color="black")

    # Plot the markers on the peaks of the different groups
    co = plt.plot(compression, peak_to_gap_map[compression], "o", color="red")
    nc = plt.plot(no_change, peak_to_gap_map[no_change], "X", color="blue")
    de = plt.plot(de_compression, peak_to_gap_map[de_compression], "D", color="limegreen")

    x = x.reshape(1, -1)[0]

    # Fill in the area underneath the different peaks in the graph
    co1 = plt.fill_between(x, density, where=((roots["compression_root_1"] < x) & (x < roots["compression_root_2"])),
                     facecolor='red', hatch="--", alpha=0.3)

    nc1 = plt.fill_between(x, density, where=((roots["no_change_root_1"] < x) & (x < roots["no_change_root_2"])),
                     facecolor='blue', hatch="||", alpha=0.3)

    de1 = plt.fill_between(x, density, where=((roots["de_compression_root_1"] < x) & (x < roots["de_compression_root_2"])),
                     facecolor='limegreen', hatch="//", alpha=0.3)

    count = 0
    # Mark the zero points of compression and decompression graph
    for key in roots.keys():
        # Do not display the zero points of the no change peak
        if key == "no_change_root_1" or key == "no_change_root_2":
            continue

        root = roots[key]
        plt.plot(root, 0, 'h', color="gray")
        plt.text(root+(-1.5 if (count % 2 == 0) else 1), 0.01, key.replace("_", " "), fontsize=font_size, rotation=90)

        count += 1

    # Find the minimum and maximum x value to display
    max_x = max([max(x), max(roots.values())])
    min_x = min([min(x), min(roots.values())])

    steps = 5
    if max_x - min_x > 100:
        steps = 10
    if max_x - min_x > 200:
        steps = 15

    max_y = max(
        [peak_to_gap_map[compression],
         peak_to_gap_map[de_compression],
         peak_to_gap_map[no_change]])

    # Shade every other column gray
    for i in range(int(min_x), int(max_x), 10):
        plt.fill_between([i, i + 5], max_y+0.05, facecolor="gray", alpha=0.1)

    plt.grid()
    # Pad the x-lim with +- 5
    plt.xlim(min_x - 5, max_x + 5)
    plt.xticks(np.arange(min_x - 5, max_x + 5, step=steps), fontsize=font_size)
    plt.yticks(np.arange(0, max_y + 0.05, step=0.05), fontsize=font_size)
    plt.title(
        f"Trailing packet: {information[0]} Cross traffic packet: {information[1]} \n Link capacity: {information[2]} {information[-1]}",
        fontsize=title_size)
    plt.legend([co1, nc1, de1], ["Compression peak", "No change peak", "Decompression peak"],
                 fontsize=font_size, ncol=3)
    plt.ylabel("Distribution weight", fontsize=font_size + 5)
    plt.xlabel("Probe gap in microseconds", fontsize=font_size + 5)
    plt.show()


# Creates a new table with a given filename, and packet sizes for:
# heading packet, trailing packet, cross traffic packet, as well
# as the link capacity.
def create_new_table(filename, p_h, p_t, p_c, l_cap):
    file = open(filename, "w+")
    file.write("p_h,p_t,p_c,L_cap,M_d,M_v,R_d,R_v,Com_d,Com_v,KDE_d,KDE_v\n")
    file.write(f"{p_h},{p_t},{p_c},{l_cap},,,,\n")
    file.close()


def create_new_row(filename, p_h, p_t, p_c, l_cap):
    file = open(filename, "a")
    file.write(f"{p_h},{p_t},{p_c},{l_cap},,,,\n")
    file.close()


# Creates and displays a graph based on a csv file and a row
def display_graph(filename, row):
    df = pd.read_csv(filename)

    x_values = ["Real", "CoDe", "COMPRESS", "KDE"]
    y_values = [df.at[row, "R_d"], df.at[row, "M_d"], df.at[row, "Com_d"], df.at[row, "KDE_d"]]
    error_bars = [df.at[row, "R_v"], df.at[row, "M_v"], df.at[row, "Com_v"], df.at[row, "KDE_v"]]

    x_ticks = range(len(x_values))
    real_bar = plt.bar(0, df.at[row, "R_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='||--')
    measured_bar = plt.bar(1, df.at[row, "M_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='////')
    compress_bar = plt.bar(2, df.at[row, "Com_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='...')
    kde_bar = plt.bar(3, df.at[row, "KDE_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='**')

    real_bar[0].set_color("grey")
    measured_bar[0].set_color("red")
    compress_bar[0].set_color("blue")
    kde_bar[0].set_color("forestgreen")

    plt.title(
        f"Trailing packet: {int(df.at[row, 'p_t'])} Cross traffic packet: {int(df.at[row, 'p_c'])} Link capacity: {int(df.at[row, 'L_cap'])}",
        fontsize=title_size
    )
    plt.legend([real_bar, measured_bar, compress_bar, kde_bar], ["Real", "CoDe (k-means)", "COMPRESS", "CoDe (KDE)"], loc="upper center")
    plt.xticks(x_ticks, x_values)
    plt.grid()
    plt.yticks(np.arange(0, 50, step=5))
    plt.ylabel("Queuing delay in microseconds", fontsize=font_size)
    plt.errorbar(x_ticks, y_values, yerr=error_bars, fmt="o", color="black", capsize=3)
    plt.show()


def display_three_graphs(file1, file2, file3, row):
    df1 = pd.read_csv(file1)
    df2 = pd.read_csv(file2)
    df3 = pd.read_csv(file3)

    x = np.arange(3)
    y_values_real = [df1.at[row, "R_d"], df2.at[row, "R_d"], df3.at[row, "R_d"]]
    y_values_measured = [df1.at[row, "M_d"], df2.at[row, "M_d"], df3.at[row, "M_d"]]
    y_values_kde = [df1.at[row, "KDE_d"], df2.at[row, "KDE_d"], df3.at[row, "KDE_d"]]
    y_values_compress = [df1.at[row, "Com_d"], df2.at[row, "Com_d"], df3.at[row, "Com_d"]]

    all_ys = y_values_real + y_values_measured + y_values_kde + y_values_compress

    error_bars_real = [df1.at[row, "R_v"], df2.at[row, "R_v"], df3.at[row, "R_v"]]
    error_bars_measured = [df1.at[row, "M_v"], df2.at[row, "M_v"], df3.at[row, "M_v"]]
    error_bars_kde = [df1.at[row, "KDE_v"], df2.at[row, "KDE_v"], df3.at[row, "KDE_v"]]
    error_bars_compress = [df1.at[row, "Com_v"], df2.at[row, "Com_v"], df3.at[row, "Com_v"]]

    all_error_bars = error_bars_real + error_bars_measured + error_bars_kde + error_bars_compress

    width = 0.2

    real_bar = plt.bar(x - 0.32, y_values_real, width=width,
                       alpha=0.7, align="center", fill=False, hatch='|-', linewidth=2)

    measured_bar = plt.bar(x-0.11, y_values_measured, width=width,
                           alpha=0.7, align="center", fill=False, hatch='//', linewidth=2)

    kde_bar = plt.bar(x + 0.11, y_values_kde, width=width,
                      alpha=0.7, align="center", fill=False, hatch='**', linewidth=2)

    compress_bar = plt.bar(x + 0.32, y_values_compress, width=width,
                           alpha=0.7, align="center", fill=False, hatch='..', linewidth=2)

    real_bar[0].set_color("grey")
    measured_bar[0].set_color("red")
    kde_bar[0].set_color("limegreen")
    compress_bar[0].set_color("blue")

    real_bar[1].set_color("grey")
    measured_bar[1].set_color("red")
    kde_bar[1].set_color("limegreen")
    compress_bar[1].set_color("blue")

    real_bar[2].set_color("grey")
    measured_bar[2].set_color("red")
    kde_bar[2].set_color("limegreen")
    compress_bar[2].set_color("blue")

    plt.grid()
    plt.title(
        f"Trailing packet: {int(df1.at[row, 'p_t'])}B Cross traffic packet: {int(df1.at[row, 'p_c'])}B Link capacity: {int(df1.at[row, 'L_cap'])}Mbps", fontsize=font_size)
    plt.legend([real_bar, measured_bar, kde_bar, compress_bar], ["Real", "CoDe (k-means)", "CoDe (KDE)", "COMPRESS"],
               loc="upper left", fontsize=font_size, ncol=4)
    plt.yticks(np.arange(0,  max(all_ys)+max(all_error_bars)+2, step=5), fontsize=font_size)
    plt.xticks(x, ['800', '1000', '1200'], fontsize=font_size)
    plt.ylabel("Queuing delay in microseconds", fontsize=font_size)
    plt.errorbar(x - 0.32, y_values_real, yerr=error_bars_real, fmt="o", color="black", capsize=3)
    plt.errorbar(x - 0.11, y_values_measured, yerr=error_bars_measured, fmt="o", color="black", capsize=3)
    plt.errorbar(x + 0.11, y_values_kde, yerr=error_bars_kde, fmt="o", color="black", capsize=3)
    plt.errorbar(x + 0.32, y_values_compress, yerr=error_bars_compress, fmt="o", color="black", capsize=3)
    plt.show()


def main():
    if len(sys.argv) > 3:
        display_three_graphs(sys.argv[1], sys.argv[2], sys.argv[3], int(sys.argv[4]))
    else:
        display_graph(sys.argv[1], int(sys.argv[2]))


if __name__ == '__main__':
    main()
