import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import sys

#Updates the value of a given row an column
def update_value(file, row, column, value):
    df = pd.read_csv(file)
    df.at[row, column] = value
    df.to_csv(file, index=False) 

#Creates a new table with a given filename, and packet sizes for:
#heading packet, trailing packet, cross traffic packet, as well 
#as the link capasity.
def create_new_table(filename, p_h, p_t, p_c, l_cap):
    file = open(filename, "w+")
    file.write("p_h,p_t,p_c,L_cap,M_d,M_v,R_d,R_v\n")
    file.write(f"{p_h},{p_t},{p_c},{l_cap},,,,\n")
    file.close()

def create_new_row(filename, p_h, p_t, p_c, l_cap):
    file = open(filename, "a")
    file.write(f"{p_h},{p_t},{p_c},{l_cap},,,,\n")
    file.close()

#Creates and displays a graph based on a csv file and a row
def display_graph(filename, row):
    df = pd.read_csv(filename)
    #df = df.astype("float")
    
    x_values = [1, 2]
    y_values = [df.at[row, "R_d"], df.at[row, "M_d"]]
    error_bars = [df.at[row, "R_v"], df.at[row, "M_v"]] 

    x_ticks = range(len(x_values))
    real_bar = plt.bar(0, df.at[row, "R_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='||--')
    measured_bar = plt.bar(1, df.at[row, "M_d"], width=0.1, alpha=0.7, align="center", fill=False, hatch='////')
    
    real_bar[0].set_color("grey")
    measured_bar[0].set_color("red")
    
    plt.title(f"Trailing packet: {int(df.at[row, 'p_t'])} Cross traffic packet: {int(df.at[row, 'p_c'])} Link capasity: {int(df.at[row, 'L_cap'])}")
    plt.legend([real_bar, measured_bar], ["Real", "CoDe"], loc="upper center")
    plt.xticks(x_ticks, x_values)
    plt.axhline(df.at[row, "R_d"], color = 'blue', linestyle = '--')
    plt.yticks(np.arange(0, 50, step=1))
    plt.ylabel("Queuing delay in microseconds")
    plt.errorbar(x_ticks, y_values, yerr=error_bars, fmt="o", color="black", capsize=3)
    plt.show()

def main():
    display_graph(sys.argv[1], int(sys.argv[2]))


if __name__ == '__main__':
    main()
