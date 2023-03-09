#include "main.h"

/**
 * _pow_recursion - x raised to power of y
 *
 * @x: first argument. base value
 *
 * @y: second argument. exponent or power
 *
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
