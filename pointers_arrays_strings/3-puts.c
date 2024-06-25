#include "main.h"

/**
 *_puts - print the argument
 * @str: one char type argument
 *
 * Description: print string
 *Return: return (0)
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
