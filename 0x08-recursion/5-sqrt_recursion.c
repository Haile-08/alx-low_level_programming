#include "main.h"

/**
 * _sqrt_value - squre root value
 * @num: the num to evaluated
 * @pSqrt: poissible sqrt of number.
 *
 * Description: to evalute the square root
 *
 * Return: the sqrt value
 */
int _sqrt_value(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (_sqrt_value(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - square root recursion
 * @n: number to be square rooted
 *
 * Description: returns the natural square root of a number.
 *
 * Return: if no sqrt then return -1
 *	if there is sqrt then return sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_value(n, 0));
}
