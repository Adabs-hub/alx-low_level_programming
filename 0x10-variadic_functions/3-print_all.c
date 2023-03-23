#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - print numbers passed to it
 * @format: separates numbers with given ch or string
 * @...: variadic func args
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, start = 0;
	char *p;
	va_list list;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
				start = 1;
				printf("%c", va_arg(list, int));
				break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
				start = 1;
				printf("%i", va_arg(list, int));
				break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
				start = 1;
				printf("%f", va_arg(list, double));
				break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
				start = 1;
				p = va_arg(list, char*);
				if (p)
					printf("%s", p);
				else
					printf("%p", p);
				break;
			}
		i++;
	}
	printf("\n");
	va_end(list);
}
