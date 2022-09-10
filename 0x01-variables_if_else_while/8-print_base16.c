#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		++n;
	}
	while (l <= 'f')
	{
		putchar(l);
		++l;
	}
	putchar('\n');

	return (0);
}
