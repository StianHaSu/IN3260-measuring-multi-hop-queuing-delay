import sys
import pandas as pd
import numpy as np
import graph_utils

file_in = sys.argv[1]

df = pd.read_csv(file_in)

measured_delay = np.average(df['M_d'].tolist())
measured_variability = np.average(df['M_v'].tolist())

actual_delay = np.average(df['R_d'].tolist())
actual_variability = np.average(df['R_v'].tolist())

compress_delay = np.average(df['Com_d'].tolist())
compress_variability = np.average(df['Com_v'].tolist())

kde_delay = np.average(df['KDE_d'].tolist())
kde_variability = np.average(df['KDE_v'].tolist())

graph_utils.create_new_row(file_in, df.at[0, "p_h"], df.at[0, "p_t"], df.at[0, "p_c"], df.at[0, "L_cap"])
graph_utils.update_value(file_in, 5, "M_d", measured_delay)
graph_utils.update_value(file_in, 5, "M_v", measured_variability)
graph_utils.update_value(file_in, 5, "R_d", actual_delay)
graph_utils.update_value(file_in, 5, "R_v", actual_variability)
graph_utils.update_value(file_in, 5, "Com_d", compress_delay)
graph_utils.update_value(file_in, 5, "Com_v", compress_variability)
graph_utils.update_value(file_in, 5, "KDE_d", kde_delay)
graph_utils.update_value(file_in, 5, "KDE_v", kde_variability)

print("--- Results combined ---")
