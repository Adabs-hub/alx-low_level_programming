#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != null)
	{
		if (d-> name == null)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d-> name);

		printf("Age: %.6f\n", d-> age);

		if (d-> owner != null)
			printf("Owner: %s\n", d-> owner);
		else
			printf("Owner: nil\n");
	}
}
