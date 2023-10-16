import pandas as pd
import matplotlib.pyplot as plt

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
    x_values = [1, 2]
    y_values = [df.at[row, "R_d"], df.at[row, "M_d"]]
    error_bars = [df.at[row, "R_v"], df.at[row, "M_v"]] 

    x_ticks = range(len(x_values))
    bars = plt.bar(x_ticks, y_values, width=0.1, alpha=0.7, align="center", fill=False, hatch='||--')
    bars[0].set_color("grey")
    bars[1].set_color("red")
    plt.xticks(x_ticks, x_values)
    plt.errorbar(x_ticks, y_values, yerr=error_bars, fmt="o", color="black", capsize=3)
    plt.show()

