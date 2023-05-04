#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: head(pointer) of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - no of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *apple, *mango;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	apple = head->next;
	mango = (head->next)->next;

	while (mango)
	{
		if (apple == mango)
		{
			apple = head;
			while (apple != mango)
			{
				nodes++;
				apple = apple->next;
				mango = mango->next;
			}

			apple = mango->next;
			while (apple != mango)
			{
				nodes++;
				apple = apple->next;
			}

			return (nodes);
		}

		apple = apple->next;
		mango = (mango->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t .
 * @head: head(pointer) of the listint_t list.
 * alhamdulilah
 * Return: No of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
