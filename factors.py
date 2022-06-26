#!/usr/bin/python3
from re import I
import sys
from math import ceil, sqrt

def factors(n):
    i = 3
    n = int(n)
    sqr = ceil(sqrt(n))

    if (n % 2 == 0):
        print("{}={:d}*{}".format(n, int((n / 2)), 2))
        return

    while (i <= sqr):
        if (n % i == 0):
            print("{:d}={:d}*{:d}".format(n, int((n / i)), i))
            return
        i += 2

    print("{:d}={:d}*{:d}".format(n, n, 1))

if __name__ == "__main__":
    try:
        with open(sys.argv[1], "r") as f:
            line = f.readline().rstrip().replace("\n", "")

            while line != '':
                factors(line)
                line = f.readline().rstrip().replace("\n", "")
    except IndexError:
        pass
