#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != null && cmp != null && size > 0)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
					return (i);
		}
	return (-1);
}
