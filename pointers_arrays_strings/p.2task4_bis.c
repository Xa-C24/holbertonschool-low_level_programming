#include "main.h"

void print_rev(char *s)
{
	int a;

	while (*(s + a) != '\0')
	{
		a++;
	}
		a -= 1;

		while (a >= 0)
		{
			_putchar(s[a]);
			a++;
		}
		_putchar('\n');
}
