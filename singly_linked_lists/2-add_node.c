#include "lists.h"
#include <string.h>
#include <stdlib.h>
	/**
	 * add_node - add a new node at beginning of the list.
	 * @head: Pointer to the adress.
	 * @str: Pointer to linked list.
	 * Return: Adress new element.
	 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}


	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate length of string manually */
	while (str[len])
	len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
	}
