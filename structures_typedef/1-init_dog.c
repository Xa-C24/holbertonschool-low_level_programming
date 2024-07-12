#include "dog.h"
#include <stdio.h>
/**
 * struct dog - data dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
