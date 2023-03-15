#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid memory
 *
 * @grid: array of pointers
 *
 * @height: height of strings
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
