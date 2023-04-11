#include "main.h"

/**
 * clear_bit - clear value of a bit to 0
 * @n: given number
 * @index: index to change bit from
 * Return: 1 on sucess -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (index > 64)
		return (-1);

	num <<= index;
	*n = *n & (~num);

	return (1);
}