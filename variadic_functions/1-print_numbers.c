#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print-number - Prints numbers.
 * @separator: string  be print between numbers.
 * @n: number of integers
 *
 * Return: no return.(void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
		va_end(args);
		printf("\n");
}
