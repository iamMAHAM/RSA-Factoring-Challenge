#!/usr/bin/python3
def factors(n):
    i = 0
    n = int(n)
    while (i < n):
        if (i in [0, 1]):
            pass
        else:
            if (n % i == 0):
                return "{}={:d}*{}".format(n, int((n / i)), i)
        i += 1

    return "{:d}={:d}*1".format(n, n)

if __name__ == "__main__":
    import sys
    try:
        if (len(sys.argv) != 2):
            print("Usage: factors <file>")
            sys.exit(1)
        with open(sys.argv[1], "r") as f:
            f = f.read().splitlines()
            for line in f:
                print(factors(line)) if len(line) > 0 else 0

    except FileNotFoundError:
        print("Error can't open {} : File does not exist".format(sys.argv[1]))
    
    except Exception as e:
        print("Exception: {e}".format(e))
