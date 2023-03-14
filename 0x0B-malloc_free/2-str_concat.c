#include "main.h"
#include <stdlib.h>

/**
 * _strlen - to fine string len
 *
 * @str: string
 *
 * Return: length on success
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: NULL on failure and pointer to location in memory on success
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer = 0;
	int i = 0, len1 = 0, len2 = 0;

	if (s1 == 0 && s2 == 0)
		i++;
	else if (s1 == 0)
	{
		len1 = 0;
		len2 = _strlen(s2);
	}
	else if (s2 == 0)
	{
		len2 = 0;
		len1 = _strlen(s1);
	}
	else
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
	}
	buffer = (char *)malloc(sizeof(char) *	(len1 + len2) + 1);
	if (buffer == 0)
		return (0);
	if (i > 0)
		return (buffer);
	while (i < len1 + len2)
	{
		if (i < len1)
			buffer[i] = s1[i];
		else
			buffer[i] = s2[i - len1];
		i++;
	}
	return (buffer);
}
