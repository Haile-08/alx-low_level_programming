#include "dog.h"

/**
 * free_dog - free the dog
 * @d: a pointer to the struct dog
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
