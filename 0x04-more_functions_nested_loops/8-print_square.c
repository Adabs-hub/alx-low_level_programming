#include "main.h"

/**
 * print_square - print square on console
 *
 *@size: an int determines lenght and width of square
 *
 * Description: print square on console based on arg size
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i;

	for (i = 0;  i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
