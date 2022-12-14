#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 *
 * @grid: multi dimesion array of int
 * @height: height of grid
 *
 * Return: null
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);

		free(grid);
	}
}

