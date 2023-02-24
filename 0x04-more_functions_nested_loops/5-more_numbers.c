#include "main.h"

/**
 * Print - prints integers numbers
 *
 * @n: inter to print to console
 *
 * Return nothin
 */
void Print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	Print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - print 0 to 9
 *
 * Description: print 1 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0;  i < 15; i++)
			Print(i);
	_putchar('\n');
	j++;
	}
}
