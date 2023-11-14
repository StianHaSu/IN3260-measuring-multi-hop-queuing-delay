import matplotlib.pyplot as plt
import sys


def display_cluster(file):
    clusters = open(file, "r+")

    y1_values = []
    y2_values = []
    y3_values = []

    next(clusters)
    for line in clusters:
        bits = line.split(",")

        match int(bits[2]):
            case 0:
                y1_values.append(float(bits[1]))
            case 1:
                y2_values.append(float(bits[1]))
            case 2:
                y3_values.append(float(bits[1]))

    plt.scatter(range(len(y1_values)), y1_values)
    plt.scatter(range(len(y2_values)), y2_values)
    plt.scatter(range(len(y3_values)), y3_values)

    plt.show()


def main():
    display_cluster(sys.argv[1])


if __name__ == "__main__":
    main()

