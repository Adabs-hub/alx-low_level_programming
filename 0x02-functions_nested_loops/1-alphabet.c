#include "main.h"
/**
 * main - main funciton Entry
 * Desc: prints lowercase charaters to console
 * Author: Adabogo Emmanuel
 * Return: zero on success
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
