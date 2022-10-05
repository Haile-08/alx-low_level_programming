#include "main.h"

/**
 * free_grid - free grid
 * @grid: the array pointer
 * @height: the height of the array
 *
 * Description: free the memory allocated in alloc_grid
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
