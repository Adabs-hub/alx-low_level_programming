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
	*s = to;
}
