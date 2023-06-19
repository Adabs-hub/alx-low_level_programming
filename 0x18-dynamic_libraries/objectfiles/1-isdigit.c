#include "main.h"

/**
 * _isdigit - detects digit
 *
 * @c: takes in a char
 *
 * Return: return 1 for digit and 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
