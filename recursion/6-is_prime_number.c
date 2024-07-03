#include "main.h"

/**
 *
 *
 */
int is_prime_helper(int n, int i)
{
    if (i > sqrt(n))
    {
        return (1);
    }
    if (n % i == 0)
    {
        return (0);
    }
    return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: le nombre à vérifier
 *
 * Return: 1 si le nombre est premier, sinon 0
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    if (n == 2)
    {
        return (1);
    }
    return (is_prime_helper(n, 2));
}
