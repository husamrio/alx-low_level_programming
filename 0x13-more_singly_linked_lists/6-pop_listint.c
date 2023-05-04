#include "lists.h"

/**
 * pop_listint - pops and frees a node out
 * @head: A pointer to the linked list address
 * Return: head node data
 * Otherwise - heads node's data
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
