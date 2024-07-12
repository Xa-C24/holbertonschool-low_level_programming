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

	if (d->owner == NULL)
	{
		printf("Ower: nil\n");
	}
	{
		printf("Ower: %s\n", d->owner);
	}
}
