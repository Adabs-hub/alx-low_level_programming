#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create and initialze 2D array to zero
 *
 * @width: with of array
 *
 * @height: height of array
 *
 * Return: Null on failure and address of pointer on success
 */

int **alloc_grid(int width, int height)
{
	int **buffer, i, int j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	buffer = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
	{
		buffer[i] = malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
			*(buffer[i] * j) = 0;
	}
	return (buffer);
}
