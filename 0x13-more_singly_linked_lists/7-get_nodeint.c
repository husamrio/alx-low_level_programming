#include "lists.h"

/**
 * get_nodeint_at_index - Gets node at index and locates a given node of list
 * @head: A pointer to the head of the listint_t list and linked list at head
 * @index: The index of the node to locate - indices start at 0. index
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 *  node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
