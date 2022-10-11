#include "dog.h"

/**
 * print_dog - print dog
 * @d: print the pointer to struct dog
 *
 * Description: print the dog
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	char n[6] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? n : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? n : d->owner);
	}
}
