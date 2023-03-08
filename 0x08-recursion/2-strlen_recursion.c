#include "main.h"

/**
 * _strlen_recursion - print string len
 *
 * @s: first argument. source string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int size = 1;

	if (*s == '\0')
		return (size - 1);
	return (size += _strlen_recursion(s + 1));
}
