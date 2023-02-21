#include "main.h"
/**
 * main - main funciton Entry
 * Desc: prints lowercase charaters to console
 * Author: Adabogo Emmanuel
 * Return: zero on success
 */

int main(void)
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
