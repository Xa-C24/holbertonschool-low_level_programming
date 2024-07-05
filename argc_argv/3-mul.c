#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main (int argc, char *argv[])
{
	int a, b, result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	a = (argv[1]);
	b = (argv[2]);
	result = a * b;

	printf("%d", result);

	return (0);
}
