	#include "function_pointers.h"
	#include <stdlib.h>
	/**
	 * array_iterator - execute a function on the array
	 * @array: array input.
	 * @size: size of array.
	 * @action: pointer to the function.
	 *
	 */
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		int i;

		if (array && action)

			for (i = 0; i < (int)size; i++)

			action(array[i]);
	}
