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
	char *s;
	size_t len;

	if (str == 0)
	{
		return (NULL);
	}

	len = strlen(str);
	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
