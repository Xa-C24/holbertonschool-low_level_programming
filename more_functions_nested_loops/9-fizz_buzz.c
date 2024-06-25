#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz
 *
 * A program that prints the numbers from 1 to 100.
 * Multiples print “Fizz” instead of the number,
 * and multiples of five print “Buzz”.
 * For numbers which are multiples of both three and five print “FizzBuzz”.
 */
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)

	{
		if (b % 3 == 0 && b % 5 == 0)
		{
			printf("FizzBuzz");
		}
			else if (b % 3 == 0)
		{
			printf("Fizz");
		}
			else if (b % 5 == 0)
			{
				printf("Buzz");
			}
		else if
		{
			printf("%d", b);
		}
			if (b < 100)
		{
			printf(" ");
		}
		if (b == 100)
		{
		printf("\n");
		}
	}
		return (0);
}
