#include "main.h"

/**
 * _strncpy - concatenates two strings
 *
 * @dest: 1st arg - destination string
 *
 * @src: 2nd arg - source string
 *
 * @n: number of char to copy from source string
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char c = src[0];

	while (i < n)
	{
		if (c == '\0')
		{
			dest[i] = '\0';
			i++;
		}
		else
		{
			dest[i] = src[i];
			i++;
			c = src[i];
		}
	}
	return (dest);
}
