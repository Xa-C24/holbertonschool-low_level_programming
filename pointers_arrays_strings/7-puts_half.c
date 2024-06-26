#include "main.h"

void puts_half(char *str)
{
	int b, ip;

	b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	ip = b;
	if (ip % 2 != 0)
		ip = (ip + 1) / 2;

		else
			ip /= 2;
		while (ip < b)
		{
			ip++;
			_putchar (*(str + ip - 1));
		}
		_putchar('\n');
}
