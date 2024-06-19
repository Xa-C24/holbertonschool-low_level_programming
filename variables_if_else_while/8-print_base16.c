#include <stdio.h>
/**
 * main - Prints the numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, j;

	for (a = 0; a < 16; a++)
	{
	putchar((j / 16) + '0');
	}
	for (j = 0; j <= 16; j++)
	{
	putchar((j % 16) + '0');
	}
	if (j > 9)
	putchar('\n');
	return (0);
}
