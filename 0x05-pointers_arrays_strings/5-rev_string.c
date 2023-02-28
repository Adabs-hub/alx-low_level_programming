#include "main.h"

/**
 * rev_string - reverse strings
 *
 * @s: source string arg
 *
 * Return: nothing
 */


void rev_string(char *s)
{
	int size = 0, j = 0;
	char tmp;

	while (s[size] != '\0')
		size++;
	for (j = 0; j < size / 2; j++)
	{
		tmp = s[j];
		s[j] = s[size - j - 1];
		s[size - j - 1] = tmp;
	}

}
