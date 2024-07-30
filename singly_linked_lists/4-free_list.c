#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - releases the list.
 *@head: Pointer to the head of the list.
 *
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
