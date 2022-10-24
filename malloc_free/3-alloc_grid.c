#include "main.h"
#include <stdlib.h>

/**
 * Task_3:alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to multi-dimen array
 */
int **alloc_grid(int width, int height)
{
	int **grid; /*dereference to exact value on int*/
	int row;
	int col;

	if (width <= 0 || height <= 0)
	{
		/*If width or height is 0 or negative, return NULL*/
		return (NULL);
	}
	/*allocate grid to an area in mem with 8x4*/
	grid = malloc(sizeof(int *) * height);
	if (!grid) /*Return NULL if not enough memory*/
	{
		return (NULL);
	}
	col = 0;
	while (col < height)
	{
		/*allocate grid[col] to an area in mem with 6x4*/
		grid[col] = malloc(width * sizeof(int));
		if (!(grid[col]))
		{
			while (col--)
			{
				free(grid[col]);
			}
			/*free all in grid*/
			free(grid);
			/*Return NULL if not enough memory*/
			return (NULL);
		}
		row = 0;
		while (row < width)
		{
			grid[col][row] = 0;
			row = row + 1;
		}
		col = col + 1;
	}
	return (grid);
}
