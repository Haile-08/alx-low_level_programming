#include "main.h"

/**
 * _strcmp - string compare
 * @s1: first input
 * @s2: second input
 *
 * Description: function that compares two strings
 *
 * Return: 0 if s1 and s2 are equal
 *	negative if s1 is less than s2
 *	positive if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i1, i2;

	for (i1 = 0; *(s1 + i1) != '\0'; ++i1)
		;

	for (i2 = 0; *(s2 + i2) != '\0'; ++i2)
		;

	if (i1 > i2)
	{
		return (15);
	}
	else if (i1 < i2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
