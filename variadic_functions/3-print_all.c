#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *separation = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separation = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), separation);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), separation);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), separation);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separation);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}