#include "main.h"
/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
