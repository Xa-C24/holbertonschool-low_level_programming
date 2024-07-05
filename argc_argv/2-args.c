	#include <stdio.h>

	/**
	 * main - Print the number of argument
	 * @argc: Number of command line argument
	 * @argv: array name
	 *
	 * Return 0
	 */
	int main(int argc, char *argv[])
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

		return (0);

	}
