#include "main.h"
/**
 * get_bit - Return value of bit.
 * @n: number to search.
 * @index: index bite to retrieve.
 *
 * Return: the value of the bit.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof (unsigned long int) * 8))
		/* Checks whether the index is valid*/

			return (-1);
	return ((n >> index) & 1);							/* Shift and mask to obtain the bit.*/
}
