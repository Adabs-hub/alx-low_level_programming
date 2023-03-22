#include "function_pointers.h"

/**
 * array_iterator - executes function with array element
 * @array: array of element to iterate and pass to func
 * @size: size of array
 * @action: function to execute array element
 * Return: nothin
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != null && action != null)
		for (i = 0; i < size; i++)
			action(array[i]);
}
