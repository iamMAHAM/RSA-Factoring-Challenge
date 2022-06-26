#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * factors - Factorize as many numbers as possible
 * @n: the integer
 * Return: a factorized number
 */
void factors(unsigned long long n)
{
	int i;
	unsigned long long inter = n;

	for (i  = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			printf("%lld=%lld*%d\n", inter, n, i);
			i--;
			return;
		}
	}
	printf("%lld=%lld*%d\n", inter, inter, 1);
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
				factors(atol(line));
			}
		}
		fclose(fd);
		return (0);
	}
	return (0);
}
