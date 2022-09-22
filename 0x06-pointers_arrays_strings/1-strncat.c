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
	int i, l;

	for (i = 0; *(dest + i) != '\0'; ++i)
	{
		*(dest + i) = *(dest + i);
	}
	for (l = 0;i < n && *(src + l) != '\0'; ++l)
	{
		*(dest + i) = *(src + l);
		++i;
	}
	
	*(dest + (i + 1)) = '\0';

	return (dest);
}
