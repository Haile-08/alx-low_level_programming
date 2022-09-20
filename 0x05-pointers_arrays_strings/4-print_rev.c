#include "main.h"

/**
 * print_rev - print reverse
 * @s: string pointer value
 *
 * Description: print a string in reverse
 *
 * Return: null
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
