#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		++i;
	}
	printf("\n");

	return (0);
}
