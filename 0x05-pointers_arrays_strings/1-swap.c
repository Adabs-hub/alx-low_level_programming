#include "main.h"

/**
 * swap_int - swap intergers
 *
 * @a: first int arg
 *
 * @b: second int arg
 *
 * Returns: nothing (void)
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
