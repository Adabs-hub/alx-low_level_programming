#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#define null 0
#include <stdarg.h>
va_list list;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*variadic_function.h*/
