#include "main.h"
#include <stdio.h>
/**
 * swap_int - funtion with two type pointers
 * @a: first arguement
 * @b: second argument
 *
 */
void swap_int(int *a, int *b)
{
	int temporaire;

		temporaire = *a;
		*a = *b;
		*b = temporaire;
}
