#include "main.h"

/**
 * _realloc - reallocates a memory
 * @ptr: a pointer to the memory previously allocated
 * @old_size: bytes, of the allocated space for pt
 * @new_size: bytes of the new memory block
 *
 * Description: reallocates a memory block using malloc and free
 *
 * Return: the pointer and NULL if new_size = 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	temp_ptr = ptr;

	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp_ptr[i];
	free(ptr);
	return (new_ptr);
}
