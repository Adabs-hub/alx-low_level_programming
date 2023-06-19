#include "main.h"

/**
 * _abs - main Entry
 *
 * @n: is an integer number
 *
 * Description: takes a number an returns an absolute value
 *
 * Return: return the absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
