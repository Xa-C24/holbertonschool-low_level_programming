#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memo;

	memo = malloc(b);

	if (memo == NULL)

	exit (98);

	return (memo);
}
