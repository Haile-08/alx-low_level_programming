#include "main.h"

/**
 * _islower - check lowercase
 * @c: input character
 *
 * Description: checks for lowercase character
 *
 * Return: 1 if c is lowercase and 0
 *	otherwize
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
	
}
