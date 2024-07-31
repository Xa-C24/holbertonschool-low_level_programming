/*Write a function that deletes the node at index index of a dlistint_t linked list.*/

#include "lists.h"
/**
 * 
 * 
 * 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temps = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		{
			return (-1);
		}

	if (index == 0)
	{
		temps = *head;	
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		
		free(temps);
		{
			return (1);
		}
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		{
			return (-1);
		}

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;
	
	free(current);
	{
		return (1);
	}

}
