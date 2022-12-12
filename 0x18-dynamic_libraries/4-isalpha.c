#include "main.h"

/**
 * _isalpha - checks alphabetic
 * @c: input char
 *
 * Description: Checks for alphabetic character
 *
 * Return: 1 if c is a letter
 *	and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
