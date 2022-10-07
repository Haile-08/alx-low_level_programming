#include "main.h"

/**
 * _calloc - calloc
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 *
 * Description: allocates memory for an array
 *
 * Return: pointer to the allocated memo
 *	Null if nmemb and size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = '0';
	return (ptr);
}
