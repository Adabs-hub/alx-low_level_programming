#include "main.h"

/**
 * print_number - prints integers numbers
 *
 * @n: inter to print to console
 *
 * Return nothin
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
