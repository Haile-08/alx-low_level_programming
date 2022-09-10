#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		++i;
	}
	putchar('\n');

	return (0);
}
