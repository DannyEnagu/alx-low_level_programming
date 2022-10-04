#include"main.h"

/**
 * free_grid - Frees a 2D array integer
 * @grid: 2D array
 * @height: height of the grid
 *
 * Return: notthing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}

		free(grid);
	}
}
