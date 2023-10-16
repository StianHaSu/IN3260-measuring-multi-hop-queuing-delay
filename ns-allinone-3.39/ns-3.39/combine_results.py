import sys
import pandas as pd
import numpy as np
from graph_utils import display_graph

file_in = sys.argv[1]
file_out = file_in+"-combined"

df = pd.read_csv(file_in)

measured_delay = np.average(df['M_d'].tolist())
measured_variability = np.average(df['M_v'].tolist())

actual_delay = np.average(df['R_d'].tolist())
actual_variability = np.average(df['R_v'].tolist())

file = open(file_out, "w+")
file.write("M_d,M_v,R_d,R_v\n")
file.write(f"{measured_delay},{measured_variability},{actual_delay},{actual_variability}")
file.close()
display_graph(file_out, 0)
