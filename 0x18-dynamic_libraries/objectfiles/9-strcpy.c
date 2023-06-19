#include "main.h"

/**
 * _strcpy - copy string
 *
 * @dest: destination string arg
 *
 * @src: source string arg
 *
 * Return: destination string
 */


char *_strcpy(char *dest, char *src)
{
	int size = 0, j = 0;

	while (src[size] != '\0')
		size++;
	for (j = 0; j < size; j++)
		dest[j] = src[j];
	dest[size] = '\0';
	return (dest);
}
