#include "main.h"

/**
 * print_line - print a line
 * @n: number of times the character _ is printed
 *
 * Description: a function that draws a stright line
 *
 * Return: null
 */

void print_line(int n)
{
	int i = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}

	while (n > i)
	{
		_putchar('_');
		i++;
		if (i == (n - 1))
		{
			_putchar('\n');
		}
	}
}
