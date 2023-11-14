import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import sys


# Updates the value of a given row an column
def update_value(file, row, column, value):
    df = pd.read_csv(file)
    df.at[row, column] = value
    df.to_csv(file, index=False)


# Creates a new table with a given filename, and packet sizes for:
# heading packet, trailing packet, cross traffic packet, as well
# as the link capasity.
def create_new_table(filename, p_h, p_t, p_c, l_cap):
    file = open(filename, "w+")
    file.write("p_h,p_t,p_c,L_cap,M_d,M_v,R_d,R_v,Com_d,Com_v,KDE_d\n")
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
    y_values = [df.at[row, "R_d"], df.at[row, "M_d"], df.at[row, "Com_d"]]
    error_bars = [df.at[row, "R_v"], df.at[row, "M_v"], df.at[row, "Com_v"]]

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
        f"Trailing packet: {int(df.at[row, 'p_t'])} Cross traffic packet: {int(df.at[row, 'p_c'])} Link capasity: {int(df.at[row, 'L_cap'])}")
    plt.legend([real_bar, measured_bar, compress_bar, kde_bar], ["Real", "CoDe", "COMPRESS", "KDE"], loc="upper center")
    plt.xticks(x_ticks, x_values)
    plt.grid()
    plt.yticks(np.arange(0, 50, step=1))
    plt.ylabel("Queuing delay in microseconds")
    plt.errorbar(x_ticks[0:-1], y_values, yerr=error_bars, fmt="o", color="black", capsize=3)
    plt.show()


def display_four_graphs(file1, file2, file3, row):
    df1 = pd.read_csv(file1)
    df2 = pd.read_csv(file2)
    df3 = pd.read_csv(file3)

    x = np.arange(3)
    y_values_real = [df1.at[row, "R_d"], df2.at[row, "R_d"], df3.at[row, "R_d"]]
    y_values_measured = [df1.at[row, "M_d"], df2.at[row, "M_d"], df3.at[row, "M_d"]]

    all_ys = y_values_real + y_values_measured

    error_bars_real = [df1.at[row, "R_v"], df2.at[row, "R_v"], df3.at[row, "R_v"]]
    error_bars_measured = [df1.at[row, "M_v"], df2.at[row, "M_v"], df3.at[row, "M_v"]]

    all_error_bars = error_bars_real + error_bars_measured

    width = 0.2

    real_bar = plt.bar(x - 0.1, y_values_real, width=width, alpha=0.7, align="center", fill=False, hatch='||--')
    measured_bar = plt.bar(x + 0.1, y_values_measured, width=width, alpha=0.7, align="center", fill=False, hatch='////')

    real_bar[0].set_color("grey")
    measured_bar[0].set_color("red")

    real_bar[1].set_color("grey")
    measured_bar[1].set_color("red")

    real_bar[2].set_color("grey")
    measured_bar[2].set_color("red")

    plt.title(
        f"Trailing packet: {int(df1.at[row, 'p_t'])} Cross traffic packet: {int(df1.at[row, 'p_c'])} Link capacity: {int(df1.at[row, 'L_cap'])}")
    plt.legend([real_bar, measured_bar], ["Real", "CoDe"], loc="upper center")
    plt.yticks(np.arange(0, 50, step=1))
    plt.xticks(x, ['Router 1', 'Router 2', 'Router 3'])
    plt.ylabel("Queuing delay in microseconds")
    plt.errorbar(x - 0.1, y_values_real, yerr=error_bars_real, fmt="o", color="black", capsize=3)
    plt.errorbar(x + 0.1, y_values_measured, yerr=error_bars_measured, fmt="o", color="black", capsize=3)
    plt.show()


def main():
    if len(sys.argv) > 3:
        display_three_graphs(sys.argv[1], sys.argv[2], sys.argv[3], int(sys.argv[4]))
    else:
        display_graph(sys.argv[1], int(sys.argv[2]))


if __name__ == '__main__':
    main()
