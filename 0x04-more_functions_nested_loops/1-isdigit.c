#include "main.h"

/**
 * _isupper - detects uppercase letters
 *
 * @c: takes in a cha
 *
 * Return: return 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
