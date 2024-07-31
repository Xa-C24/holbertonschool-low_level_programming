/* Write a function that frees a dlistint_t list.*/

#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint_t - function with one argument.
 * @head: pointer for linked list.
 *
 * Return: No retour with 'void'.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *stock_temp;

	while (head != NULL)
	{
		stock_temp = head;
		head = head->next;
		free(stock_temp);
	}
}
