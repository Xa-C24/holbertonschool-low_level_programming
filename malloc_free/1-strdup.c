	#include "main.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
	*/
char *_strdup(char *str)
{
	char *tab;
	int i, len;

	tab = malloc(sizeof(str));

	i = len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (tab == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}

	return (tab);
}
