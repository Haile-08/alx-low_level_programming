#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - search for a value
 * @array: array value
 * @size: size of the array
 * @value: value to search
 *
 * Description: search using Linear search algorithm
 *
 * Return: index of a value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
		i++;
	}
	return (-1);
}
