#include "main.h"

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
			if (i != 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar('\n');
			}
			i++;
		}
	}
	else if (n >= 98)
	{
		j = n;
		while (j >= 98)
		{
			if (j != 98)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else if (j == 98)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
			}
			j--;
		}
	}
}
