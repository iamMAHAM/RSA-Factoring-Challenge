#!/usr/bin/python3
def factors(n):
    i = 0
    n = int(n)
    while (i < n):
        if (i in [0, 1]):
            pass
        else:
            if (n % i == 0):
                return "{}={:d}*{}".format(n, (n / i), i)
        i += 1

    return "{}={}*1".format(n, n)


if __name__ == "__main__":
    import sys
    try:
        if (len(sys.argv) != 2):
            print("Usage: factors <file>")
            sys.exit(1)
        with open(sys.argv[1], "r") as f:
            f = f.read().splitlines()
            for line in f:
                print(factors(line))

    except Exception as e:
        print("Error can't open ", sys.argv[1], e)
