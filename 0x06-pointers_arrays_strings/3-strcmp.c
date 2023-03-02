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
 * _strcmp - compares two strings
 *
 * @s1: 1st arg - destination string
 *
 * @s2: 2nd arg - source string
 *
 * Return: -15 if s1 is less, 0 if same and 15 is s1 is greaater s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result, s1_len = 0, s2_len = 0;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s1_len <= s2_len)
		len = s1_len;
	else
		len = s2_len;
	while (i <= len)
	{
		result = s1[i] - s2[1];
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
