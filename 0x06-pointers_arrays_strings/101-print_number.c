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
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
