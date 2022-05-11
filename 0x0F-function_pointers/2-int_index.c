#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: the array
 * @size: number of elements
 * @cmp: pointer to the function
 *
 * Return: index of the first element
 *		if no match return -1
 *		size<=0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);

}
