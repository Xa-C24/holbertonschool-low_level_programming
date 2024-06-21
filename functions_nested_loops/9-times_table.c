#include "main.h"
/**
 * print table 0-9.
 * 
 * Return: nothing.
 */
void times_table(void)
{
	int d, m, res;

	for (d = 0; d <= 9; d++)
	{
		for (m = 0; m <= 9;m++)
		{
			res = (d*m);
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res>=10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && m != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else 
				_putchar((res % 10) + '0');
		}
			_putchar('\n');
	}
}
