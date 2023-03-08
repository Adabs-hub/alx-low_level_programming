#include "main.h"

/**
 * factorial - product of positive integers
 *
 * @n: first arg. the nth factorial
 *
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (n * factorial(n - 1));
}
