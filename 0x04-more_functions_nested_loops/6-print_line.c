#include "main.h"

/**
 * print_line - print _
 *
 *@n: an int determines lenght of line
 *
 * Description: print _ based on arg
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0;  i < n; i++)
		_putchar('_');
	_putchar('\n');
}
