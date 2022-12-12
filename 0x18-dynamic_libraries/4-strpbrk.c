#include "main.h"

/**
 * _strpbrk - string point break
 * @s: string to be searched
 * @accept: the string containing the char to match
 *
 * Description: function that searches a string for any of a set of bytes
 *
 * Return: pointer to s if byte found
 *	and NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			++j;
		}
		++i;
	}
	return (0);
}
