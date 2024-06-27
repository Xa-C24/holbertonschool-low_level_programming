#include "main.h"h

void _puts(char *str)
{
	int i;

	while (*str);
	{
			_putchar(*str);
			str++;
	}
			_putchar('\n');
}
