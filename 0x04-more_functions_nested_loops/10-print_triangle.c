#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 *
 * Description: print a triangle
 *
 * Return: null
 */

void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 1;

			while (j <= size)
			{
				if (j < (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}

