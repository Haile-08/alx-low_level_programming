#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate grid
 * @width: width of a grid
 * @height: height of a grid
 *
 * Description: returns a pointer to a 2 dimensional array of integers
 *
 * Return: Null if w & h is 0 or  < 0
 *	pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j, l1, l2;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	for (j = 0; j < height; j++)
		ptr[j] = (int *)malloc(width * sizeof(int));
	if (ptr == NULL)
	{
		for (i = 0; i < height; i++)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}
	for (l1 = 0; l1 < height; l1++)
	{
		for (l2 = 0; l2 < width; l2++)
		{
			if (ptr == NULL)
			{
				return (NULL);
			}
			ptr[l1][l2] = 0;
		}
	}
	return (ptr);
}
