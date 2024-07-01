#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills n bytes of memory white char c
 * @s: pointer to first byte of memory
 * @b: character to fill memory
 * @n: number of bytes fo fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i != n; i++)
		s[i] = b;

		return (s);
}
