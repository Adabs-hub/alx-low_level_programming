#include "main.h"

/**
 * _sqrt - recursion funct
 *
 * @n: arg 1
 *
 * @i: arg 2
 *
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - find squar root of numbers
 *
 * @n: first argument. number to find root of
 *
 * Return: root n or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
