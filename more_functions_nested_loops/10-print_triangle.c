#include "main.h"
/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int a, x, y;

	a = 0;
	x = size - 1;
	while (a < size)
	{
		x = size - 1 - a;
		y = a + 1;
		while (x > 0)
		{
			_putchar (' ');
			x--;
		}
		while (y > 0)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
		a++;
	}
		if (size <= 0)
			_putchar('\n');
}
