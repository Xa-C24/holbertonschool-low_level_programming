#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Prints all elements.
 * @h: pointer to the list_t.
 *
 * Return: count.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
