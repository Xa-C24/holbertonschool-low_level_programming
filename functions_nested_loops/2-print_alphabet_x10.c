#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a;
	int n = 0;

	while (n <= 9)
	{
	for (a = 'a' ; a <= 'z' ; a++)
	{
	putchar(a);
	}
	putchar('\n');
	n++;
	}
}