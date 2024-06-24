#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int n)
{
	int l;
	int d;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
		for (d = 0; d < l; d++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
