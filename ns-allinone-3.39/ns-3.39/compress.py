import sys
import numpy as np


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
    trailing = int(sys.argv[2])
    link_cap = int(sys.argv[3])
    heading = 64

    expected_gap_dest = expected_gap_i(trailing, heading, link_cap, link_cap) + (trailing/link_cap)
    measurements = make_measurements(file, expected_gap_dest, trailing)

    mean = np.mean(measurements)
    std_deviation = np.std(measurements)*10**6

    print(mean)
    print(std_deviation)


if __name__ == "__main__":
    main()
