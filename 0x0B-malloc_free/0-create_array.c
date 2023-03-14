#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate memory and initialize to char
 *
 * @size: size memory to allocate
 *
 * @c: char to initialize with
 *
 * Return: null if failed and pointer to memory on success
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	int i;

	if (size == 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer != NULL)
		for (i = 0; i < size ; i++)
			buffer[i] = c;
	return (buffer);
}
