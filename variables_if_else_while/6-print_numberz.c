#include <stdio.h>

int main(void)
/**
 * Descrption: main - Prints the numbers 1 à 9
 *
 * Return: Always 0.
 */
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
