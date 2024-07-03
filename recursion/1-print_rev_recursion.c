#include "main.h"
/**
 *-print_rev_recursion - print a string
 * @s: pointer
 * 
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
