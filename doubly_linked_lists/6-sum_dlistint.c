/* Write a function that returns the sum of all the data (n) of a dlistint_t linked list.*/

#include "lists.h"
/**
 * sum_dlistint - return the all sum.
 *
 * @head: pointer to head list.
 *
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
