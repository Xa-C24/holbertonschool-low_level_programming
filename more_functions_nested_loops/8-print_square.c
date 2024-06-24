#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */
void print_square(int size)
{
	int c, d;

	d = 0;

	if (size < 1)
		_putchar('\n');

	while (d < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		d++;
	}
}
