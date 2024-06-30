#include "main.h"
#include <stdio.h>
/**
 *
 */
char *string_toupper(char *)
{
	char sentence[] = "Look up!\n";

	int i;
		for (i = 0; i < strlen (sentence); i++)
		{
			sentence[i] = toupper(sentence[i]);
			printf(sentence[i]);
		}
		printf("\n");

	return (0);
}
