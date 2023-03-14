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
 * _strdup - copy and duplicate string
 *
 * @str: string to duplicate
 *
 * Return: NULL on failure and empty string string pointer on success
 */

char *_strdup(char *str)
{
	char *buffer = 0;
	int i = 0, len = 0;

	if (str == 0)
		return (0);
	len = _strlen(str);
	buffer = (char *)malloc(sizeof(char) *	(len + 1));
	if (buffer == 0)
		return (0);
	while (i < len)
	{
		buffer[i] = str[i];
		i++;
	}
	return (buffer);
}
