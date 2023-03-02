#include "main.h"

/**
 * reverse_array - reverse array elements
 *
 * @a: array of integers
 *
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
