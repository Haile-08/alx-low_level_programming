#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arg.
 * @argv: array of command line arg.
 *
 * Description: prints its name, followed by a new line.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
