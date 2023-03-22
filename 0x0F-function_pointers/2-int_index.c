#include "function_pointers.h"

/**
 * int_index - search integer
 * @size: size of array
 * @cmp: compare func
 * Return: index of searched element in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != null && cmp != null && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) == 1)
				return (i);
	return (-1);
}
