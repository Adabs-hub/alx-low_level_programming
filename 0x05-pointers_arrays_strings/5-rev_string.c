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
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	char tmp[i];

	while (i >= 0)
	{
		tmp[j] = s[i]
		i--;
		j++;
	}
	s = &tmp;
}
