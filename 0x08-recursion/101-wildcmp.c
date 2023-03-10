
#include "main.h"


/**
 * wildcmp - compare a string is identical to another
 *
 * @s1: first argument. source string
 *
 * @s2: second argument. string to compare
 *
 * Return: one if they're identical 0 other wise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
