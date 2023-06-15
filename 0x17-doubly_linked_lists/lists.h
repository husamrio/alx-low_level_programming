#ifndef __LISTS_H
#define __LISTS_H

#include <stdlib.h> /* malloc, free */
#include <string.h>
#include <stdio.h> /* printf */

#define __silent __attribute__((__unused__))

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for ALX project
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* function prototypes */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int sum_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
void free_dlistint(dlistint_t *head);

/* helper functions */
dlistint_t *insert_node(dlistint_t *tmp, int n);

#endif
