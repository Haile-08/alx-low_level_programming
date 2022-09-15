#include "main.h"

/**
 * _isdigit - digit
 * @c: input value
 *
 * Description: checks if a value is a digit
 * Return: 1 if c is a digit
 *	0 if c is not a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
