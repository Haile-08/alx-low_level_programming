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
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
