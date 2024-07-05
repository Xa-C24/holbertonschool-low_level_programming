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

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d", result);

	return (0);
}
