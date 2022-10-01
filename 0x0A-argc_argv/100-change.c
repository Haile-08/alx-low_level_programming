#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arg
 * @argv: array of command line arg
 *
 * Description: prints the minimum number of coins to make
 *		change for an amount of money using 25, 10, 5, 2, and 1 cent
 * Return: 1 or Error if number of arg is 1
 *	0  if argumen is negative.
 */

int main(int argc, char *argv[])
{
	int cents, coins_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins_number += 1;
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
