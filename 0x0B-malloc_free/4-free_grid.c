#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2 dimensional grid created by alloc_grid
 * @grid: the grid from previous task
 * @height: height in column of the grid
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
