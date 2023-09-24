#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free two dim array
 * @grid: two dim grid
 * @height: height dim of grid
 * Description: frees memory of grid
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
