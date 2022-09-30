#include <stdio.h>

/**
 * main -  Entry point
 * @argc: number of command line arg
 * @argv: array of command line arg
 *
 * Description: prints all arguments it receives
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}
