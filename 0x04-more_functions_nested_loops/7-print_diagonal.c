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
	int i = 0;
	
	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
