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
 * table - prints table
 *
 * @i: first argument_with of table
 * @j: secont argument _length of table
 * @n: third argument _ integer for multiplication
 *
 * return: nothing
 */

void table(int *i, int *j, int n)
{
	if (*j == 0)
	{
		Print(0);
		if (*j == n)
			_putchar(',');
	}
	else
	{
		if (*j * *i < 10 && *j * *i >= 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			Print(*j * *i);
			if (*j == n)
				_putchar(',');
		}
		else if (*j * *i < 100 && *j * *i > 9)
		{
			_putchar(' ');
			_putchar(' ');
			Print(*j * *i);
			if (*j == n)
				_putchar(',');
		}
		else
		{
			_putchar(' ');
			Print(*j * *i);
			if (*j == n)
				_putchar(',');
		}
	}
	++*j;
}

/**
 * print_times_table - main Entry
 *
 * @n: reference point of counting integers
 *
 * Description: prints a matrix of a times table
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i = 0, j = 0;

		while (i < n + 1)
		{
			while (j < n + 1)
			{
				table(&i, &j, n);
			}
			_putchar('\n');
			i++;
			j = 0;
		}
}
