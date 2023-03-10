#include "main.h"

/**
 * _strchr - locates a char
 *
 * @s: 1st arg. souces string
 *
 * @c: 2nd arg. char to locate
 *
 * Return: first occurance of char c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (&s[i]);
}
