#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Description: program of description
 *
 * Return: 0
 */
int main(void)
{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}



