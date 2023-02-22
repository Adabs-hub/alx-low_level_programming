#include "main.h"


/**
 * print_alphabet_x10 - main Entry
 *
 * Description: prints alphabet from another function 10x
 *
 * returns: nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int c = 'a';

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
		c = 'a';
	}
}

