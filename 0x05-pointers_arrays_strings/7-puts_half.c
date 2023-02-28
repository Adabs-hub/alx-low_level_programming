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
	for (j = (size) / 2; j < size ; j++)
		_putchar(str[j]);
	_putchar('\n');

}
