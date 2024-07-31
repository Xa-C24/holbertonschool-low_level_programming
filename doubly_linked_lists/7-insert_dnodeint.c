#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node.
 * @h: double pointer.
 * @idx: index of the list.
 * @n: value to be added.
 *
 * Return: adress of the new_node.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *new_node, *current;

		if (h == NULL)
		{
			return (NULL);
		}

		 if (idx == 0)
		 {
			 return (add_dnodeint(h, n));
		 }

	   current = *h;
		for (i = 0; current != NULL && i < idx - 1; i++)
		{
			current = current->next;
			i++;
		}

		if (current == NULL || (current->next == NULL && i < idx - 1))

		new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

		new_node->n = n;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;

	return (new_node);
}
