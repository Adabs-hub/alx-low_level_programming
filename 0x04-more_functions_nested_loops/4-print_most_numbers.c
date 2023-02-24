#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 *
 * Description: print 1 to 9 except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char str[] = {'0', '1', '3', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0;  i <= 7; i++)
		_putchar(str[i]);
	_putchar('\n');
}
