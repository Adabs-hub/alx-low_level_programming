#include "main.h"


/**
 * print_alphabet_x10 - main Entry
 *
 * Description: prints alphabet from another function 10x
 *
 * returns: nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}

