#include "main.h"

/**
 * _strlen - string length
 * @s: string pointer value
 *
 * Description: return the length of a string
 *
 * Return: string_length
 */

int _strlen(char *s)
{
	int n = 1;
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		while (*(s + i) != '\0')
		{
			n = n + 1;
			i++;
		}
	}

	return (n);
}
