#include "main.h"
/**
 *
 *
 */
int _sqrt_recursion(int i, int n)
{
	return (check_square(0, n));
}

int check_square(int i, int n)
{
int sq = i * i;

	if (sq > n)
		return (-1);

	if (sq == n)
		return (i);

	return (check_square(i + 1, n));
}
