#include "lists.h"

/**
* get_dnodeint_at_index - Finds a node in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to find.
*
* Return: If the node does not exist, NULL.
*         Otherwise, a pointer to the located node.
*
* Using a while loop and a counter variable to iterate through the list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);
i++;
current = current->next;
}
return (NULL);
}
