#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 *		and initialize it with a specific char
 * @size: size of the memory
 * @c: the char value
 *
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		array = malloc(sizeof(char) * size);
		while (i < size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}
}
