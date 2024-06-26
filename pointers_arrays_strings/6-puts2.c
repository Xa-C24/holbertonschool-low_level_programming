#include "main.h"
/**
 * rev_string - reverse chaine de caractère
 * @s: input string.
 *
 */
void puts2(char *str)
{
	int b = 0;

	while (*(str + b) != '\0')
		{
			if (b % 2 == 0)
			{
				_putchar (*(str + b));
			}
			b++;
		}
		_putchar('\n');
}
