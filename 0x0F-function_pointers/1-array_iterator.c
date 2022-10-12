#include "function_pointers.h"

/**
 * array_iterator - iterate between function arrays
 * @size: size of the array
 * @action: pointer to the function
 * @array: input array
 *
 * Description: executes a function given as a
 *		parameter on each element of an array.
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned long int i = 0;

		while (i < size)
		{
			action(array[i]);
			++i;
		}
	}
}
