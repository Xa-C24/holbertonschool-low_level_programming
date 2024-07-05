#include <stdio.h>

 /**
 * main - Prints name of command called
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 *			command name
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	if (!argc)
		return (1);

	printf("%s\n", *argv);

	return (0);
}
