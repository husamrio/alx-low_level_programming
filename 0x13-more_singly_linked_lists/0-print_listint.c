#include "lists.h"
/**
 * print_listint - Outputs a sequence of integers contained within a list
 * @h: Head pointer of the listint_t type
 * Return: size_t value no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
