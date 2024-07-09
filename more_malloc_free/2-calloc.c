#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	total = 0;
	while (total < nmemb * size)
	{
		ptr[total] = 0;
		total++;
	}
	return (ptr);
}
