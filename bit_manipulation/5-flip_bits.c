#include "main.h"
/**
 * flip_bits -  invert or toggle a bit.
 * @n:first number.
 * @m: second number.
 *
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;  /* XOR: find the different bits*/
	unsigned int count = 0;

	while (xor_result)		/*XOR: It compares the corresponding bits of two numbers*/
	{
		count += xor_result & 1;
		xor_result >>= 1; /*shift xor_result one bit to the right*/
	}
		return (count);
}
