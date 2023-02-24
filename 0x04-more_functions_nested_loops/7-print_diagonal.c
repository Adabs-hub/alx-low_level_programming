#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 *@n: an int determines lenght of diagonal line
 *
 * Description: print diagonal line based on arg size
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0;  i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}
