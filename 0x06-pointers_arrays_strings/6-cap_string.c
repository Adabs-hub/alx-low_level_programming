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
 * cap_string - change first letter of all words to uppercase
 *
 * @str: 1st arg - source string
 *
 * Return: uppercase string
 */

char *cap_string(char *str)
{
	int i = 0, str_len = 0;

	str_len = _strlen(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (i < str_len)
	{
		if (str[i] == ' ' && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
