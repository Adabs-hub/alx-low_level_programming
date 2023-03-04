#include "main.h"

/**
 * _memset - fill memory with constant byte
 *
 * @s: string
 *
 * @b: char to initial with
 *
 * @n: n byte pointed by memory
 *
 * Return: modified string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s[i] != '0')
	{
		if (i < n)
			*(s + i) = b;
		else
			*(s + i) = NULL;
		i++;
	}
	return (s);
}
