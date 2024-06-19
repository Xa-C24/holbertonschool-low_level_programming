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
	char a;
	for (a = '1' ; a <= '9' ; a++)
	putchar(a + '0');
	putchar('\n');
	return (0);
}
