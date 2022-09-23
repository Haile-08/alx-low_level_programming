#include "main.h"

/**
 * reverse_array  - reverse array
 * @a: an array of integers
 * @n: the number of elements
 *
 * Description: reverses the content of an array of integers
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		--j;
		++i;
	}
}
