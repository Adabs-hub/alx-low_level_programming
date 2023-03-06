#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum
 *
 * @a: 2D base array pointer
 *
 * @size: size of array pointer;
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned long f_sum = 0, b_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; i < size; j++)
		{
			if (i == j)
				f_sum += *(a + (i * size + j));
			if (j == size - i)
				b_sum += *(a + (i * size + j));
		}
	}
	printf("%lu, %lu", f_sum, b_sum);
}
