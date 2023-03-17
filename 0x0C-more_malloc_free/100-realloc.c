#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
		return (result);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		result[i] = ((char *)ptr)[i];
	free(ptr);

	return (result);
}
