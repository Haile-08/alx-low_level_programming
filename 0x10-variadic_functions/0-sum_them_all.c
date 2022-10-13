#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 *
 * Decription: the sum all its parameters
 *
 * Return: the sum of all its parameters.
 *	if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int  i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
