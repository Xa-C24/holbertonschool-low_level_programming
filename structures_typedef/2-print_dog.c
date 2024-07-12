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
		printf("Owner: nil\n");
	}
	{
		printf("Owner: %s\n", d->owner);
	}
}
