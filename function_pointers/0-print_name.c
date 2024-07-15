#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints name Bob.
 * @name: input Bob.
 *@f: function pointer.
 *
 * Return: no retour.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)

		f(name);
}
