#include "main.h"

/**
 * _abs - absolute value
 * @n: input vale
 *
 * Description: computes the absolute value of an integer.
 *
 * Return: the abs value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
