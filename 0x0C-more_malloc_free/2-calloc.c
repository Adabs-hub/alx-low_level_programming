#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory and initail zero
 *
 * @nmemb: array members
 *
 * @size: array size
 *
 * Return: pointer to array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer = 0;
	int i;

	if (nmemb == 0 || size == 0)
		return (0);
	buffer = malloc(size * nmemb);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	for (i = 0; i < nmemb * size; i++)
		buffer[i] = 0;
	return (jbuffer);
}
