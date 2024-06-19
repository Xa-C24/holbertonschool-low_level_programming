#include <stdio.h>
/**
 * main - Prints the numbers 0 at 9 and six first character
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	for (a = 0 ; a <= 9; a++)
	{
		putchar(a + '0');
		if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
