#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 *
 * Description: prints a square
 *
 * Return: null
 */

void print_square(int size)
{
	int i = 0;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			n = 0;
			while (n < size)
			{
				_putchar('#');
				n++;
			}
			_putchar('\n');
			i++;
		}
	}
}


