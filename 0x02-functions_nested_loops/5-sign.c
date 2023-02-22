#include "main.h"

/**
 * print_sign - main Entry
 *
 * @n: is an integer number
 *
 * Description: indicates the sign of a number and zero if zero
 *
 * Return: +1 for positive, 0 for zero, -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
