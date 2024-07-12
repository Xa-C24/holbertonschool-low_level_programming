#include "dog.h"
#include <stdio.h>
/**
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

		return;

	if (d == NULL)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	{
		printf("Age: %f\n", d->age);
	}
	{
		printf("Name: %s\n", d->owner);
	}
}
