#include "main.h"

/**
 * most_numbers - print 0 to 9
 *
 * Description: print 1 to 14
 *
 * Return: nothing
 */

void most_numbers(void)
{
	char str[] = "01234567891011121314";
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0;  i < 20; i++)
			_putchar(str[i]);
	_putchar('\n');
	j++;
	}
}
