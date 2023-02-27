#include "main.h"

/**
 * _puts - print string
 *
 * @str: takes string
 *
 * Desc: print strings to stdout
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] == '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
