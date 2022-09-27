#include "main.h"

/**
 * print_diagsums - print diagonals sum
 * @a: array to use
 * @size: size of diagonal
 *
 * Description: prints the sum of the two diagonals of a
 *		square matrix of integers.
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}
