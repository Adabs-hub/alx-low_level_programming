#include "main.h"


/**
 * _strcat - concatenates two strings
 *
 * @dest: 1st arg - destination string
 *
 * @src: 2nd arg - source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_sz = 0, src_sz = 0;

	dest_sz = _strlen(dest);
	src_sz = _strlen(src);
	while (i < src_sz)
	{
		dest[dest_sz] = src[i];
		i++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}
