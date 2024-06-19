#include <stdio.h>
/**
 * main - Prints the numbers 0 at 9 and six first character
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = '0';
	char c = 'a';

	while (a <= '9');
	{putchar(a);
	a++;
	}
	while (c <= 'f')
	{putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
