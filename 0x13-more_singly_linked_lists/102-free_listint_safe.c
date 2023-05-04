#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - No of unique nodes(counts)
 * @head: Head of the listint_t to check.(pointer)
 * Return: If the list is not looped - 0.
 *         else - No of unique nodes in list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *apple, *mango;
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

			apple = apple->next;
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
 * free_listint_safe - Frees a listint_t list without issues
 * @h: head of the listint_t list.(pointer)
 * Return:  freed list size
 * Description:function sets head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
