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
		if (d->name == null)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age != null)
			printf("Age: %f\n", d->age);
		else
			printf("Age: 0\n");

		if (d->owner != null)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
