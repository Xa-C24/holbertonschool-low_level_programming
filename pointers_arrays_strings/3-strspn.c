#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: beginning of string
 * @accept: list characters for prefix
 *
 * Return: accecpt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)

	char *a = accept
	int found = 0;

	while (*a)
	{
		if (*s == *a)
		found = 1;
		break;
	}
	a++;
	{
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
