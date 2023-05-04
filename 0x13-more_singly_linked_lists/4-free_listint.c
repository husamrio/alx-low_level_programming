#include "lists.h"
/**
 * free_listint - frees the listint_t list
 * @head:Pointer to the head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
