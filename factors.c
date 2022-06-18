#include "stdio.h"
#include "stdlib.h"

char *factors(n)
{
    int i = 0;
    char *buffer;
    n = atoi(n);

    buffer = malloc(sizeof(char) * 250);
    if (!buffer)
    {
        return (NULL);
    }
    while (i < n)
    {
        if (i == 0 || i == 1);
        else
        {
            if (n % i == 0)
                sprintf(buffer, "{%d}={%d}*{%d}", n, (n / i), i);
        }
    }
    
}

int main(int argc, char *argv[])
{
    FILE *fd;

    if (argc != 2)
    {
        printf("Usage: factors <file>\n");
        exit(1);
    }
    fd = fopen(argv[1], "r");

    while (fd)
    {

    }
    

}