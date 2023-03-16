#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size memory to allocate
 *
 * Return: pointer to allocated space or exite 98
 */

void *malloc_checked(unsigned int b)
{
	void *buffer = malloc(b);

	if (!buffer)
		noreturn void exit(98);
	return (buffer);
}
