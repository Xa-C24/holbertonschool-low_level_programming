#include "main.h"
#include <stdio.h>
/**
 *
 */
char *string_toupper(char *)
{
	char b[] = "Look up!\n";

	int i;
		for (i = 0; i < strlen (b); i++)
		{
			b[i] = toupper(b[i]);
		{
			printf(b[i]);
		}
		}
		printf("\n");

	return (0);
}
