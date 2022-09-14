#include "main.h"

/**
 * print_sign - print sign
 * @n: input value
 *
 * Description: prints th sign of a number
 *
 * Return: 1 if n is greate than zero
 *	0 if n is zero
 *	-1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
