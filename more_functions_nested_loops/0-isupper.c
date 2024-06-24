#include "main.h"
/**
 * _isupper - detect upper case alphabets
 * @c: input character
 *
 * Return: (1) for right else (0) for fasle
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'a')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
