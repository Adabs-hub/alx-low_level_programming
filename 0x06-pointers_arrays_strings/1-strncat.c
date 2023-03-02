#include "main.h"

/**
 * _strlen - find string len
 *
 * @s: input string
 *
 * Return: string size
 */

int _strlen(char *s)
{
	char c = s[0];
	int size = 0;

	while (c != '\0')
	{
		size++;
		c = s[size];
	}
	return (size);
}

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
	while (i < n)
	{
		dest[dest_sz] = src[i];
		i++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}
