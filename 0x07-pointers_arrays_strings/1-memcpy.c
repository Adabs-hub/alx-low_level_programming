#include "main.h"

/**
 * _memcpy - copies n byte form src to dest
 *
 * @dest: 1st arg: destination string
 *
 * @src: 2nd arg: source string
 *
 * Return: destination string pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n: i++)
		*(dest + i) = *(src + i);
	return (dest);
}
