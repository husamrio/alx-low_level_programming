#include "lists.h"
/**
 * listint_len - Returns length of linked list elements
 * @h:A pointerto the head struct to go through
 * Return: amount of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
