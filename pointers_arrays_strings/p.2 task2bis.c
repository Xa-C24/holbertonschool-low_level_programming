#include "main.h"

int _strlen(char *s)
{
	int a;

	a = 0;
	
	while (*(s + a ) != '\0')
		{
			a++;
		}
		return (a);
}
