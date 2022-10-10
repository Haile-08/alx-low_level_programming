#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
 * struct dog - dog description
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: a struct with a description of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
