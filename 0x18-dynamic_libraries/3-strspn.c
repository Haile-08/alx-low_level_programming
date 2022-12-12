#include "main.h"

/**
 * _strspn - substring length
 * @s: string to be scanned
 * @accept: list of characters to match
 *
 * Description: function that gets the length of a prefix substring
 *
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int b;

	while (*(s + i) != '\0')
	{
		j = 0;
		b = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + i) == *(s + j))
			{
				++b;
				break;
			}
			++j;
		}
		if (b == 0)
		{
			break;
		}
		++i;
	}
	return (i);
}
