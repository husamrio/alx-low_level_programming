#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node to the beginning of a doubly linked list
 * @head: pointer to head of the list
 * @n: data for the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
