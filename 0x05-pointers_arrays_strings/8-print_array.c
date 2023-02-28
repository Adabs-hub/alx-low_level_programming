#include <stdio.h>
#include "main.h"

/**
 * print_array - reverse strings
 *
 * @a: first arg
 *
 * @n: second arg
 *
 * Return: nothing
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%p", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
}
