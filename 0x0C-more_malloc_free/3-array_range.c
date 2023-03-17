#include "main.h"
#include <stdlib.h>

/**
 * array_range - create range of arrays
 *
 * @min: min value
 *
 * @max: max value
 *
 * Return: Null on falure. pointer to array
 */

int *array_range(int min, int max)
{
	char *array = 0;
	int i = 0;

	if (min > max)
		return (0);
	array = malloc(max - min + 2);
	if (!array)
	{
		free(array);
		return (0);
	}
	for (i = 0; (min + i) <= max; i++)
		array[i] = min + i;
	return (array);
}
