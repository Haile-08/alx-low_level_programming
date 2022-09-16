#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of times
 *
 * Description: draws a diagonal line
 *
 * Return: null
 */

void print_diagonal(int n)
{
	int i = 1;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			s = 1;

			while (s <= i)
			{
				_putchar(' ');
				s++;
			}
			i++;
			_putchar(92);
			_putchar('\n');
		}
	}
}
