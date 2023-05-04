#include "lists.h"

/**
 * sum_listint - processes the sum of all the
 *               data (n) of a listint_t list.
 * @head: The head of the listint_t list.
 *
 * Return: If the list of the value empty - 0.
 *         If not - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

