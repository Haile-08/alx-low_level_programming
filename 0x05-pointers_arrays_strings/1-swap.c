#include "main.h"

/**
 * swap_int - swap value
 * @a: the first pointer value
 * @b: the second pointer value
 *
 * Description: swaps the values of two integers
 *
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int p = 0;
	int *n;

	n = &p;
	*n = *a;
	*a = *b;
	*b = p;
}
