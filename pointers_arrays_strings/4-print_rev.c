#include "main.h"
/**
 * print rev - function one argument
 * @s: first argument 
 *
 * Description: function for print string in reverse
 * Return: new line
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
		a -= 1;
		while (a > 0)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
