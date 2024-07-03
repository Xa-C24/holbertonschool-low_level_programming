#include "main.h"
/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n / 2 + 1, n));
}

/**
 * check_prime - checks if a number is prime
 * @i: number to check if is divisible by, starting at highest number
 * @n: number to check if is prime
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int i, int n)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(i - 1, n));
}
