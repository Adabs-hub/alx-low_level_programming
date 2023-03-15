#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int **buffer, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	buffer = (int **) malloc(sizeof(int *) * height);
	if (buffer == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		buffer[i] = (int *)malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
			return (0);
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
		j = 0;
	}
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	return (buffer);
}
