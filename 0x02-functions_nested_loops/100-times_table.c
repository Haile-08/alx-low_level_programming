#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table,starting with 0.
 * @n: number of times
 */

void print_times_table(int n)
{
	int i;
	int j;
	int times;

	if (n > 15 && n < 0)
	{

	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				times = i * j;
				printf("%d,   ", times);
			}
			printf("%d", i*n);
			printf("\n");
		}
	}
}
