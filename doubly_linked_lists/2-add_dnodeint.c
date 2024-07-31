/*Write a function that adds a new node at the beginning of a dlistint_t list*/

#include "lists.h"
#include <stdlib.h>
/***
 * add_dnodeint - function with two argument.
 * @head: double pointer.
 * @n: number for node.
 *
 * Return: data for new_node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

		new_node->n = n;
		new_node->prev = NULL;				/* prev = previous = précédent */
		new_node->next = *head;

		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
}
