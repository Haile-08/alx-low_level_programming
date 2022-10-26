#include "main.h"

/**
 * print_last_digit - print last digit
 * @r: the input
 *
 * Description: a function that prints the last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(long int r)
{
	int i = 0;

	if (r > 0)
		i = r % 10;
	else
		i = (r * -1) % 10;
	_putchar(i + '0');
	return (i);
}
