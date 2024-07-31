/* Write a function that adds a new node at the end of a dlistint_t list.*/

#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end.
 * @head: double pointers to the head.
 * @n: number of node.
 *
 * Return: adress for the element.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
		new_node->prev = last;

		return (new_node);
}
