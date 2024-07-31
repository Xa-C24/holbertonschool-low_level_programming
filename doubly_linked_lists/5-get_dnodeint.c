/* Write a function that returns the nth node of a dlistint_t linked list. */

#include "lists.h"
/**
 * get__dnodeint_at_index - function with arguments.
 *
 * @head: head pointer.
 * @index: nth node.
 *
 * Return: new nth to get.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
		return (NULL);
}
