#include "main.h"
/**
 * rev_string - reverse chaine de caractère
 * @str: input string.
 *
 * Description: print one char out of 2 of a string
 * Return: n
 */
void puts2(char *str)
{
	int b = 0;

	while (b >= 0)
	{
		if (str[b] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (b % 2 == 0)
			_putchar (str[b]);
			b++;
	}
}
