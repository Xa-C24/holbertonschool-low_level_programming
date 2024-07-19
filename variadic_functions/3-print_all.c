#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * print_all - Prints all arguments 
 * @format: format of argument.
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	
	unsigned int i = 0, j = 0, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		while (t_arg[j])

			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;

		switch (format[i])

		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;

			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;

			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;

			case 's':
				str = va_arg(args, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}

				printf("%s", str);
				break;
				i++;
		} 
		
	}	
		
		printf("\n");
		va_end(args);
}
