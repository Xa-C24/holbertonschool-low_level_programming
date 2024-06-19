#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, j;

	for (a = 0; a < 10; a++)

	for (j = 0; j <= 10; j++)

	if (j > 9)
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	putchar('\n');
	return (0);
}
