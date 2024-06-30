#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	 printf("%d\n", _strcmp(s1, s2));

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
