#include "main.h"

/**
 * puts_half - reverse strings
 *
 * @str: source string arg
 *
 * Return: nothing
 */


void puts_half(char *str)
{
	int size = 0, j = 0;

	while (str[size] != '\0')
		size++;
	if (size % 2 == 0)
		for (j = (size) / 2; j < size; j++)
			_putchar(str[j]);
	else
		for (j = (size - 1) / 2; j < size; j++)
			_putchar(str[j - 1]);
	_putchar('\n');

}
