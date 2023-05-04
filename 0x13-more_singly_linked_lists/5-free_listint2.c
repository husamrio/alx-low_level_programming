#include "lists.h"
/**
 * free_listint2 - frees a listint_t but head is null
 * @head: Pointer to the linked list and head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
