#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - create un new dog_t
 * @name: name of dog
 * @age: date of dog
 * @owner: owner of the dog
 *
 */
	int _strlen(char *s)
{
		int i;
		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
}

char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;
	while (src[len] != '\0')
	{
		len ++;
	}

	for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
			dest[i] = '\0';
		
		return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	if (name == NULL)
	{
		return (NULL);
	}

	if	(owner == NULL)
	{
		return (NULL);
	}


	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			return (NULL);
		}

	name_copy = malloc(_strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(dog);
			return (NULL);
		}
	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(dog);
			return (NULL);
		}
	_strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
