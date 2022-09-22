#include "main.h"

/**
 * _strnca - string concat
 * @dest: destination of output
 * @src: source input
 * @n: n bytes from src
 *
 * Description: concatenates two strings
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l, o;

	for (i = 0; *(dest + i) != '\0'; ++i)
	{
		*(dest + i) = *(dest + i);
	}

	for (l = 0; *(src + l) != '\0'; ++l)
		;
	if (n < l)
	{
		for (o = 0; o < n; ++o)
		{
			*(dest + i) = *(src + o);
			++i;
		}
	}
	else
	{
		for (o = 0; *(src + o) != '\0'; ++o)
		{
			*(dest + i) = *(src + o);
			++i;
		}
	}
	*(dest + (i + 1)) = '\0';

	return (dest);
}
