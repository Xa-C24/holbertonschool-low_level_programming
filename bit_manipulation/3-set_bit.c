#include "main.h"
/**
 * set_bit - sets the value
 * @n: pointer to number to modify.
 * @index: index of the bit to set.
 *
 * Return: 1 ifworked, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))	/* Check that the index is valid. */
			return (-1);							/* if index is + or = is off limit = error.*/

	*n = *n | (1UL << index);

	return (1);
}
