#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * factors - Factorize as many numbers as possible
 * @n: the integer
 * Return: a factorized number
 */
int *factors(const char *n)
{
	int i = 3;
	unsigned long int v = atol(n);
	int tri = ceil(sqrt(v));

	if ((v % 2) == 0)
	{
		printf("%lu=%lu*%d\n", v, (v / 2), 2);
		return (0);
	}
	
	while (i <= tri)
	{
		if (v % i == 0)
		{
			printf("%lu=%lu*%d\n", v, (v / i), i);
			return (0);
		}
		i += 2;
	}
	printf("%lu=%lu*%d\n", v, v, 1);
}

/**
 * main - An Entry Point
 * @argc: the arg count
 * @argv: the list of arg
 * Return: 0 on success -1 otherwise
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	signed char line[1000];

	fd = fopen(argv[1], "r");

	if (fd)
	{
		while (fgets(line, 1000, fd))
		{
			if (atol(line) != 0)
			{
				factors(line);
			}
		}
		fclose(fd);
		return (0);
	}
	return (0);
}
