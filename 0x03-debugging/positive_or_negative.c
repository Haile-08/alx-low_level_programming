#include "main.h"

/**
 * positive_or_negative - positive or negative
 * @i: input int value
 *
 * Description: check if a number is positive or negative
 *
 * Return: null
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive",i);
	}
	if (i == 0)
	{
		printf("%d is zero",i);
	}
	if (i < 0)
	{
		printf("%d is negative",i);
	}
	putchar('\n');
}
