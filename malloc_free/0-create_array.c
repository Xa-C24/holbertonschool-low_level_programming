#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * create_array - Entrer tab
 * @size: size of tab
 * @c : character in the tab
 *
 * Return: pointer to tab, NULL if fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < size; i++)
		{
		array[i] = c;
		}

		return (array);
}
