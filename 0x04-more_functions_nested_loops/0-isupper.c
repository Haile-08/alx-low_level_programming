#include "main.h"

/**
 * _isupper - uppercase char
 * @c: input value
 *
 * Description: checks if a character is uppercase
 *
 * Return: 1 if c is uppercase
 *	0 if c is not uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
