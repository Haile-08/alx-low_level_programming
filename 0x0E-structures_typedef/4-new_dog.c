#include "dog.h"

/**
 * new_dog - new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Description: create a new dog elements
 *
 * Return: pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = 3.5;
	dog->owner = owner;
	(void)age;
	return (dog);
}
