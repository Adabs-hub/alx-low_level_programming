#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sum all arguments passed to func
 * @n: number of arguments
 * @...: variadic func args
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	/*if n is zero return zero*/
	if (n == 0)
		return (0);
	/*initiate and get finite n arguments */
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	/*close arg access*/
	va_end(arg);

	return (sum);
}
