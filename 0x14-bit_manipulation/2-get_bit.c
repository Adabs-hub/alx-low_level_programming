#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to check bit
 * @index: index to get bit from
 * Return: bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
