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
	int num;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				num = j % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
		i++;
	}
}
