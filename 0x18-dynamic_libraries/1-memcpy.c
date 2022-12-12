#include "main.h"

/**
 * _memcpy - memory copie
 * @dest: destination array where the content is to be copied
 * @src: source of data to be copied
 * @n: nummber of bytes to be copied
 *
 * Description: function that copies memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
	{
		if (dest[i] == *dest)
		{
			break;
		}
		++i;
	}
	while (i < n)
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	return (dest);
}
