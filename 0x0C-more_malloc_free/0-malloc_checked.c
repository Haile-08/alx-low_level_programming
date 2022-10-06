#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the memory allocated
 *
 * Description: a function that allocates memory using malloc.
 *
 * Return: none
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
