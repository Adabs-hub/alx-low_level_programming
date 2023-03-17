#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
 * string_nconcat - concatenate two strings to n byte
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of n byte
 *
 * Return: NULL on failure and pointer to location in memory on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer = 0;
	unsigned int i = 0, len1 = 0, len2 = 0;

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
	if (n > len2)
		n = len2;

	buffer = malloc(sizeof(char) *	(len1 + n + 1));
	if (buffer == 0)
		return (0);
	if (i > 0)
		return (buffer);
	while (i < len1 + n)
	{
		if (i < len1)
			buffer[i] = s1[i];
		else
			buffer[i] = s2[i - n];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
