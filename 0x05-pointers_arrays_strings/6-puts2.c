#include "main.h"

/**
 * puts2 - print string
 *
 * @str: takes string
 *
 * Desc: print strings to stdout
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i + 2) % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
