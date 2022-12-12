#include "main.h"

/**
 * _strncpy - string copies
 * @dest: destination input
 * @src: source input
 * @n: n bytes from src
 *
 * Description: function that copies a string
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; ++i)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		++i;
	}
	return (dest);
}
