#include "main.h"

/**
 * _pow_recursion - power of recursion
 * @x: the value to be raised
 * @y: the amount of times to raise
 *
 * Description: returns the value of x raised to the power of y
 *
 * Return: -1 if y is lower than 0
 *	power of if y is greater than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
