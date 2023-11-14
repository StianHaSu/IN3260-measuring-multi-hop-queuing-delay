import sys
import numpy as np
import pandas as pd
from graph_utils import update_value


def expected_gap_i(trailing_packet, heading_packet, link_one, link_two):
    return (trailing_packet / link_one) - (heading_packet / link_two)


def make_measurements(file_name, expected_gap, trailing):
    gaps = open(file_name, "r+")
    measurements = []

    next(gaps)
    for gap in gaps:
        measurement = expected_gap - float(gap)

        if float(gap) != (trailing / 100) and measurement > 0:
            measurements.append(measurement)

    return measurements


def main():
    file = sys.argv[1]
    file_out = sys.argv[2]
    row_to_change = int(sys.argv[3])
    trailing = int(sys.argv[4])
    link_cap = int(sys.argv[5])
    heading = 64

    expected_gap_dest = expected_gap_i(trailing, heading, link_cap, link_cap) + (trailing/link_cap)
    measurements = make_measurements(file, expected_gap_dest, trailing)

    mean = np.mean(measurements)
    std_deviation = np.std(measurements)*10**6

    frame = pd.read_csv(file_out)

    update_value(file_out, row_to_change, "Com_d", "%.2f" % mean)
    update_value(file_out, row_to_change, "Com_v", "%.2f" % std_deviation)

    print(mean)
    print(std_deviation)


if __name__ == "__main__":
    main()
