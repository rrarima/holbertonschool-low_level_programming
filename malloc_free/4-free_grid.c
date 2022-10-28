#include <stdio.h>
#include "main.h"
#include <stdlib>
/**
 * Task_4:free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int col = 0;

	while (col < height)
	{
		free(grid[col]);
		col = col + 1;
	}
	free(grid);
}
