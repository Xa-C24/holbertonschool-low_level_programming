#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node to the end of a list.
 * @head:  Double pointer to the top of the list.
 * @str: String to be duplicated in the new node.
 *
 * Return: Address of new node, or NULL if unsuccessful.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;			/* The last node points to the new node. */
	}

	return (new_node);
}
