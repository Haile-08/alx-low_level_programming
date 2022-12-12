#include "main.h"

/**
 * _strcat - string concat
 * @dest: input destination
 * @src: input source
 *
 * Description: concatenates two strings
 *
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; ++i)
	{
		*(dest + i) = *(dest + i);
	}
	for (j = 0; *(src + j) != '\0'; ++j)
	{
		*(dest + i) = *(src + j);
		++i;
	}

	*(dest + (i + 1)) = '\0';

	return (dest);
}
