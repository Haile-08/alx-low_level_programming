#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			++l;
		}
		putchar(l);
		++l;
	}
	putchar('\n');
	return (0);
}
