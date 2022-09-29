#include "main.h"

/**
 * factorial - factorial
 * @n: number to factored
 *
 * Description: returns the factorial of a given number
 *
 * Return: the factorial value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
