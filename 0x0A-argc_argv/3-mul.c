#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arg
 * @argv: array of commadn line arg
 *
 * Description: multiplies two numbers.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}
