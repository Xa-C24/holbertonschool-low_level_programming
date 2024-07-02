#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
void print_diagsums(int *a, int size)
{
		int nb1 = 0;
		int nb2 = 0;
		int x = 0;

	for (x = 0; x < size; x++)
	{
		nb1 += a[x * size + x];
		nb2 += a[x * size + (size - 1 - x)];
	}
		printf("%d, %d\n", nb1, nb2);
}
