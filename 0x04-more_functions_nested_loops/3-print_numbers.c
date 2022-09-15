#include "main.h"

/**
 * print_numbers - print digits
 *
 * Description: print numbers form 0 to 9
 *
 * Return: null
 */

void print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
