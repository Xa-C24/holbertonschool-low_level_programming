#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Prints all elements.
 * @h: Pointeur to list.
 *
 * Return: count.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
