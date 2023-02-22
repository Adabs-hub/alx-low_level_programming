#include "main.h"

/**
 * print_last_digit - main Entry
 *
 * @n: is an integer number
 *
 * Description: takes a number an returns an last digit
 *
 * Return: return last digit
 */

int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (n < 0)
		l_digit = l_digit * -1;
	_putchar(l_digit + '0');
	_putchar('\n');
	return (l_digit);
}
