#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct functio for operation.
 * @s: char opertaor.
 *
 * Return: pointer to the function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},

	{NULL, NULL}
};
	int i;

	i = 0;

	while (ops[i].operation != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		{
				return (ops[i].operation);

		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
