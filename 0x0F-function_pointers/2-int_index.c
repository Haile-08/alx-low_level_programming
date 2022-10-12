#include "function_pointers.h"

/**
 * int_index - find index
 * @array: input array
 * @size: size of array
 * @cmp: pointer to the function
 *
 * Description: search for an integer
 *
 * Return: return the index
 *	if size <= 0 return -1
 *	if none found return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
