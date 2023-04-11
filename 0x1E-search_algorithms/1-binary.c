#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - print array
 * @i: the start index
 * @j: the end index
 * @array: the array
 *
 * Return: none
 */
void print_array(size_t i, size_t j, int *array)
{
	printf("Searching in array:");
	while (i <= j)
	{
		if (i != j)
			printf(" %d,", array[i]);
		else
			printf(" %d", array[i]);
		i++;
	}
	printf("\n");
}
/**
 * binary_search - find a value
 * @array: first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, M;

	L = 0;
	R = size - 1;
	while (L <= R)
	{
		print_array(L, R, array);
		M = (int)((L + R) / 2);
		if (array[M] < value)
			L = (size_t)M + 1;
		else if (array[M] > value)
			R = (size_t)M - 1;
		else
			return (M);
	}
	return (-1);
}
