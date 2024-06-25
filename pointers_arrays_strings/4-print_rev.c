#include "main.h"
/**
 * print rev - function one argument
 *
 *
 * Description: function for print string in reverse
 *
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
		a -= 1;
		while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	};
	_putchar('\n');
}
