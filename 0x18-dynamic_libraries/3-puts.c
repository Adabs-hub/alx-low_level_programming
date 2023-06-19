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

	write(1, str, _strlen(str));
	_putchar('\n');
}
