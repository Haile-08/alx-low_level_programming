#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints 9 times a table
 *
 * Discription: prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int mul;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			mul = i * j;
			if (mul < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			++j;
		}
		_putchar('\n');
		++i;
	}
}
