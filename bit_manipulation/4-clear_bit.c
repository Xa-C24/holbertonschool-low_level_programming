#include "main.h"
/**
 * clear_bit - used to set a specific bit to 0.
 * @n: pointer to the number to be modified.
 * @index:  the index of the bit to be set to 0.
 *
 * Return: -1 if it's fail; 1 if it's ok.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask; /* mask: variable for create bits.*/

	if (index >= sizeof(unsigned long int) * 8)
	/* Check that the index is valid*/
	{
		return (-1);
	}
		mask = ~(1UL << index);		/* UL = unsigned Long*/
	*n &= mask;
		return (1);
}
