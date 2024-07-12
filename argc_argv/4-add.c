	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	/**
	 *
	 *
	 *
	 */

int main(int argc, char *argv[])
{
		int sum = 0;


	if (argc == 1)
		{
		printf("0\n");
			return (0);
		}


		for (int i = 1; i < argc; i++)
		{

			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}
	