#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#define null 0
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /*variadic_function.h*/
