#include "main.h"
/**
 * main - check the code
 *
 * Return: value always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int a = 0;

	while (c[a] != '\0')
{
	_putchar(c[a]);
	a++;
}
	_putchar('\n');
	return (0);
}
