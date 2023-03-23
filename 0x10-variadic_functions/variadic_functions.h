#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#define null 0
#include <stdarg.h>

/**
 * struct print - A new struct type defining our print
 * @symbol: Our symbol representing the data type
 * @print_func: a function pointer that prints
 */

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*variadic_function.h*/
