#include <stdio.h>
#include "main.h"

/**
 * Task_4:free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[col]);
		i = i + 1;
	}
	free(grid);
}