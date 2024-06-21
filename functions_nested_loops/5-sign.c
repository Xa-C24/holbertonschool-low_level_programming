#include "main.h"
/**
 * Print sign: Print the sign of a number
 *
 * @n: number checked
 * Return: 1 for positive; return -1 for negative; return value 0 end
 */


int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
