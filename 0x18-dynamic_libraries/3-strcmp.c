#include "main.h"

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
	int i = 0, result = 0, len, s1_len = 0, s2_len = 0;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s1_len <= s2_len)
		len = s1_len;
	else
		len = s2_len;
	while (i <= len)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
