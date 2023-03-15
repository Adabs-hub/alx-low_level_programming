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
	int **buffer = NULL, i;

	if (width < 1 || height < 1)
		return (NULL);
	buffer = malloc(sizeof(*buffer) * width);
	for (i = 0; i < width; i++)
		buffer[i] = malloc(sizeof(**buffer) * height);
	return (buffer);
}
