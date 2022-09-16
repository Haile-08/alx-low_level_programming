#include "main.h"

/**
 * more_numbers - print number
 *
 * Description: print the number from 0 to 14
 *		10 times.
 * Return: null
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				continue;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
		i++;
	}
}
