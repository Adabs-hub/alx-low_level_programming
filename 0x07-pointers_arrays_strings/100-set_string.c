#include "main.h"

/**
 * set_string - set string pointer to pointer to pointer
 *
 * @s: pointer to pointer. string to set
 *
 * @to: pointer. value to set to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	int i = 0;

	while (*to[i] = '\0')
	{
		**s[i] = *to[i];
		i++;
	}
}
