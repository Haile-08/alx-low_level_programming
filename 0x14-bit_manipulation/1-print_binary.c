#include <stdio.h>
#include "main.h"

/**
 * max_pow_pos - maximum possible power
 * @num: the decimal input
 *
 * Description: maximum possible power of 2
 *
 * Return: max pow pos
 */

long int max_pow_pos(unsigned long int num)
{
	long int i = 0;
	unsigned long int base = 1;

	while (num >= base)
	{
		++i;
		base = base * 2;
	}
	return ((i - 1));
}

/**
 * pow_of_two - power of two
 * @nu: the power number
 *
 * Descrition: find the power of 2
 *
 * Return: the power of
 */

unsigned long int pow_of_two(long int nu)
{
	unsigned long int ba = 1;
	long int j;

	for (j = 1; j <= nu; j++)
		ba = ba * 2;
	return (ba);
}
/**
 * print_binary - print binary
 * @n: the decimal input
 *
 * Description: prints the binary representation of a number
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int bas, num1;
	long int mpp;

	if (n == 0)
		_putchar(0 + '0');
	else if (n == 1)
		_putchar(1 + '0');
	else
	{
		num1 = n;
		mpp = max_pow_pos(n);
		while (mpp >= 0)
		{
			bas = pow_of_two(mpp);
			if (num1 >= bas)
			{
				_putchar(1 + '0');
				num1 = num1 - bas;
			}
			else
			{
				_putchar(0 + '0');
			}
			--mpp;
		}
	}
}
