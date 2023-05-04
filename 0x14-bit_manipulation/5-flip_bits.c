#include "main.h"

/**
 * flip_bits - change 0 bit s to 1's and 1 bits to 0's
 * @n: first number
 * @m: second number
 * Return: number of bits that needs flipping for the numbers to be same
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int i = 0;

	diff = n ^ m;

	while (diff)
	{
		i++;
		diff &= (diff - 1);
	}

	return (i);
}
