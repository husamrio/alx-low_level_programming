#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
