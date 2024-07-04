#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
int _sqrt_recursion(int n)

{
	return (check_square(0, n));
}



/**
 * check_square - searches for the square root of n, recursively
 * @i: square root to check first
 * @n: number to find root of
 *
 * Return: Square root of number, -1 if no whole root
 */
int check_square(int i, int n)
{
	int sq = i * i;

	if (sq > n)
		return (-1);

	if (sq == n)
		return (i);

	return (check_square(i + 1, n));
}
