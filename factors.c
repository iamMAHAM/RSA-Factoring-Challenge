#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * factors - Factorize as many numbers as possible
 * @n: the integer
 * Return: a factorized number
 */
char *factors(const char *n)
{
	int i = 0;
	char *buffer;
	unsigned long int v = atol(n);

	buffer = malloc(sizeof(char) * 100000);
	if (!buffer)
	{
		return (NULL);
	}

	while (i < v)
	{
		if (i == 0 || i == 1)
		{}
		else
		{
			if (v % i == 0)
			{
				sprintf(buffer, "%ld=%ld*%d", v, (v / i), i);
				return (buffer);
			}
		}
		i += 1;
	}
	sprintf(buffer, "%ld=%ld*1", v, v);
	return (buffer);
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
	char *res  = NULL;
	char *f;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		exit(-1);
	}

	fd = fopen(argv[1], "r");

	if (fd)
	{
		while (fgets(line, 1000, fd))
		{
			if (atol(line) != 0)
			{
				f = factors(line);
				res = strdup(f);
				printf("%s\n", res);
				free(res);
				free(f);
			}
		}
		fclose(fd);
		return (0);
	}
	return (-1);
}