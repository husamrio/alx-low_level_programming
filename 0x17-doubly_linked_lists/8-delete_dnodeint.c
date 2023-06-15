#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node at a given index
* in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to delete.
*
* Return: 1 if it succeeded, -1 if it failed.
*
* Variation 1: Using a while loop to iterate through the list
* and find the node to delete.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (current == NULL)
return (-1);

if (current == *head)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
}

free(current);
return (1);
}
