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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
