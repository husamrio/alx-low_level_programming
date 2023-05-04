#include "lists.h"

/**
 * find_listint_loop - Finds loop listint_t linked list.
 * @head: Head of the listint_t list.(Pointer)
 * Return: If no loop - NULL.
 *         else - address of node where the loop begins.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *apple, *mango;

	if (head == NULL || head->next == NULL)
		return (NULL);

	apple = head->next;
	mango = (head->next)->next;

	while (mango)
	{
		if (apple == mango)
		{
			apple = head;

			while (apple != mango)
			{
				apple = apple->next;
				mango = mango->next;
			}

			return (apple);
		}

		apple = apple->next;
		mango = (mango->next)->next;
	}

	return (NULL);
}
