#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the grid to free.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
	free(grid[z]);
	}
	free(grid);
}
