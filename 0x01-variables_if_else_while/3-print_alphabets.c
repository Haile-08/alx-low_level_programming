#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		++l;
	}
	while (u <= 'Z')
	{
		putchar(u);
		++u;
	}
	putchar('\n');

	return (0);
}
