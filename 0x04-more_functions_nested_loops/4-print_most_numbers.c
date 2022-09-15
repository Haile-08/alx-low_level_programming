#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Description: print the numbers from, 0 to 9
 *		dont print 2 and 4
 * Return: null
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{

		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
