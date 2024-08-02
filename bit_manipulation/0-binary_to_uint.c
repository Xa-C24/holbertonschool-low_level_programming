#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number into an integer.
 * @b:pointer to a string.
 *
 * Return: result convert number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int compt = 0;

	if (b == NULL)
	{
		return (0);
	}

		while (b[compt] != '\0')
		{
			if (b[compt] != '0' && b[compt] != '1')
				return (0);


			result = result * 2 + (b[compt] - '0');
				compt++;
		}

	return (result);

}
