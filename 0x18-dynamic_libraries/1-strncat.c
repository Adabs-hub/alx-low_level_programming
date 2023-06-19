#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: 1st arg - destination string
 *
 * @src: 2nd arg - source string
 *
 * @n: number of char to concatenate to string
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_sz = 0;

	dest_sz = _strlen(dest);
	while (i < n && src[i] != '\0')
	{
		dest[dest_sz] = src[i];
		i++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}
