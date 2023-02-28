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
	char *tmp = "";

	while (s[i] != '\0')
	{
		i++;
	}
	tmp = (char *) malloc(i);
	i--;
	while (i >= 0)
	{
		tmp[j] = *(s + i);
		i--;
		j++;
	}
	for (i = 0; i < j; i++)
	{
		*(s + i) = tmp[j];
		j--;
	}

}
