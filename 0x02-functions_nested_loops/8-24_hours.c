#include "main.h"

/**
 * jack_bauer - main Entry
 *
 * Description: displays time in succession
 *
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	while (i <= 2)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				while (m < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && m == 9)
					{
						break;
					}
					m++;
				}
				k++;
				m = 0;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}

}
