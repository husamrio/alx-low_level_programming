#include "lists.h"

/**
* sum_dlistint - Calculates the sum of all the data in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
*
* Return: The sum of all the data in the list.
*
* Using recursion to calculate the sum of all the data in the list.
*/
int sum_dlistint(dlistint_t *head)
{
if (head == NULL)
return (0);
return (head->n + sum_dlistint(head->next));
}
