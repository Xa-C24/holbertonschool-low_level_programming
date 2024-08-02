#include "main.h"
/**
 * print_binary - print binary.
 * @n: number to print binary.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)

	print_binary(n >> 1);		/*uses recursion to divide the number by 2 by  */
								/* shifting the bits to the right (`>> 1`) until `n` is greater than 1.*/

	_putchar((n & 1) ? '1' : '0');
}
