#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *string_nconcat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
	{
		len++;
	}
	string_nconcat = malloc(sizeof(char) * (len + 1));

		if (string_nconcat == NULL)

		len = 0;

	for (index = 0; s1[index]; index++)
	{
		string_nconcat[len++] = s1[index];
	}


	for (index = 0; s2[index]; index++)
	{
		string_nconcat[len++] = s2[index];
	}

	string_nconcat[len] = '\0';

		return (string_nconcat);
}
