/**Write a function that returns the number of elements
in a linked dlistint_t list.*/

#include "lists.h"
/**
 * dlistint_len - function with one argument.
 * @h: pointer di doubly linked list.
 *
 * Return: total number elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
