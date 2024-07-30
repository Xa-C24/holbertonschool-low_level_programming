#include "lists.h"
#include <string.h>
 /**
 * add_node - add a new node at beginning of the list.
 * @head: Pointer to the adress.
 * @str: Pointer to linked list.
 * Return: Adress new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
