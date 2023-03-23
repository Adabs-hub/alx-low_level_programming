#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print numbers passed to it
 * @separator: separates numbers with given ch or string
 * @n: number of args
 * @...: variadic func args
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);
			if (str == null)
				printf("(nil)");
			else
				printf("%s", str);
			if (i != n - 1 && separator != 0)
				printf("%s", separator);
		}
	printf("\n");
	va_end(args);
}
