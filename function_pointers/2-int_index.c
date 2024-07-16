#include "function_pointers.h"
/**
 * int_index - Searche an interger in the array
 * @array: a array integers.
 * @size : size of array.
 * @cmp: a pointer.
 *
 * Return: If no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
		int index;

	if (array && size)
	{
		if (size <= 0)
			return (-1);
	}

	for (index = 0; index < size; index++)

	{
		if (cmp(array[index]) != 0)
			return (index);
	}
		return (-1);
}
