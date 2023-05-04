#include "main.h"
#include <stdio.h>

/**
 * _strlen - find string len
 * @b: char string
 * Return: len of string
 */

unsigned int _strlen(const char *b)
{
	unsigned int len = 0;

	while (b[len] != '\0')
		len++;

	return (len);
}


/**
 * binary_to_uint - convert binary to int
 * @b: binary arg
 * Return: uint value or 0 of error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1, i = 0, len = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	i = len - 1;
	while ((i + 1) > 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '0')
		{
			if (i == len - 1)
				pow *= 1;
			else
				pow *= 2;
		}
		else
		{
			if (i == len - 1)
				pow *= 1;
			else
				pow *= 2;

			dec += pow;
		}
		i--;

	}
	return (dec);
}
