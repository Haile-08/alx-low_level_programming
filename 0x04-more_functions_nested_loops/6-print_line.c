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
	else
	{
		while (n > i)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
