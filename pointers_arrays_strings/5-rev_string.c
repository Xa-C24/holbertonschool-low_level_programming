#include "main.h"


void rev_string(char *s)

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
}
