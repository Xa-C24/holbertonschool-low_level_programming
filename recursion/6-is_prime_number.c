	#include "main.h"
	#include <stdio.h>
	#include <math.h>

	/* Déclaration de la fonction récursive */
	int check_prime(int divisor, int n);

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
		return (check_prime(2, n));
	}

	/**
	 * check_prime - aide à vérifier si un nombre est premier de manière récursive
	 * @divisor: le diviseur actuel
	 * @n: le nombre à vérifier
	 *
	 * Return: 1 si le nombre est premier, sinon 0
	 */
	int check_prime(int divisor, int n)
	{
		if (divisor > sqrt(n))
		{
			return (1);
		}
		if (n % divisor == 0)
		{
			return (0);
		}
		return (check_prime(divisor + 1, n));
	}
	