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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : "0";
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
