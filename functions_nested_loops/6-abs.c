#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int a)
{
	if (a < 0)
	a = -a;
	return (a);
}
