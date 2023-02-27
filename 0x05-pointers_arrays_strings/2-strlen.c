#include "main.h"

/**
 * _strlen - calculate lenght of strings
 *
 * @s: source string arg
 *
 * Return: size of string arg char*
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
