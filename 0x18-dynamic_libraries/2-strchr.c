#include "main.h"

/**
 * _strchr - search character
 * @s: string to be searched
 * @c: character to be searched
 *
 * Description: function that locates a character in a string
 *
 * Return: if c is found return c
 *	if c is not found return NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		++i;
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
