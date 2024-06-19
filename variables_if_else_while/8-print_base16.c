#include <stdio.h>
/**
 * main - Prints the numbers 0 at 9 and six first character
 *
 * Return: Always 0.
 */

int main(void)
{
	char a;
	char c;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
