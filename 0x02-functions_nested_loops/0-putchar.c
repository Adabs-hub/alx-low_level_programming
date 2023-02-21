#include "main.h"
/**
 * main - used to print string
 *
 * Description: 'used to print the string "_putchar"
 *
 * Return: returns zero on success
 */
int main(void)
{
	char str[] = "_putchr";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
