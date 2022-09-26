#include "main.h"

/**
 * _memset - memory set
 * @s: startring address of the memory to be filled
 * @b: the value to be filled
 * @n: number of bytes to be filles starting form
 *	s to be filled
 *
 * Description: function that fills memory with a constant byte.
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == *s)
		{
			break;
		}
		++i;
	}

	while (i < n)
	{
		s[i] = b;
		++i;
	}

	return (s);
}


