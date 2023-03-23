#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - print numbers passed to it
 * @separator: separates numbers with given ch or string
 * @n: number of args
 * @...: variadic func args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d", va_arg(args, int));
				if (separator != 0)
					printf("%s ", separator);
				else
					printf(" ");
			}
			else
				printf("%d\n", va_arg(args, int));
		}
	va_end(args);
}
