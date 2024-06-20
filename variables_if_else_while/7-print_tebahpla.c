#include <stdio.h>

int main(void)
/**
 * main - prints de character
 * Descrption:Prints alphabet reverse 
 *
 * Return: Always 0.
 */
{
	char low;

	for (low = 'z' ; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
return (0);
}
