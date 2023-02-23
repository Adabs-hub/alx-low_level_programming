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
 * print_to_98 - main Entry
 *
 * @n: reference point of counting integers
 *
 * Description: sums two numbers together
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		i = n;
		while (i <= 98)
		{
			Print(i);
			if ( i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
	}
	else if (n >= 98)
	{
		j = n;
		while (j >= 98)
		{
			Print(j);
			_putchar(',');
			_putchar(' ');
			j--;
		}
		_putchar('\n');
	}
}
