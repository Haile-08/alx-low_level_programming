#include "main.h"

/**
 * array_range - array of integer
 * @min: min value
 * @max: max value
 *
 * Description: creates an array of integers
 *
 * Return: pointer to the new array
 *	NULL if min > max
 *	NUll if malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
