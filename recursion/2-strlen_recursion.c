#include "main.h"
/**
 * _strlen_recurssion - fonction return string
 * @s: print the string
 *
 * Return: longest string
 */
int _strlen_recursion(char *s)
{
		if (*s == '\0')
		return (0);

		return (1 + _strlen_recursion(s + 1));
}
