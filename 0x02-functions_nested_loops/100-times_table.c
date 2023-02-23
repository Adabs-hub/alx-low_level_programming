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
				if (j == 0)
				{
					Print(0);
					_putchar(',')
				}
				else
					if (j != n)
					{
						if (j * i < 10 && j * i == 0)
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
							Print(j * i);
							_print(',');
						}
						else if (j * i < 100)
						{
							_putchar(' ');
							_putchar(' ');
							Print(j * i);
							_print(',');
						}
						else
						{
							_putchar(' ');
							Print(j * i);
							_putchar(',');
						}
					}
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
}
