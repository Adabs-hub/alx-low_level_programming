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
 * string_toupper - change all lowercase to uppercase
 *
 * @str: 1st arg - source string
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0, str_len = 0;

	str_len = _strlen(dest);
	while (i < src_sz)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
