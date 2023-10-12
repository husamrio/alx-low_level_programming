#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <math.h>
#include <stdio.h>

/**
 * struct listint_s - Singly linked list node structure.
 * ********************************
 * @n: Integer stored at the node.
 * ********************************
 * @index: Index of the node in the list.
 * *********************************
 * @next: Pointer to the next node.
 *
 * Description:
 * This structure defines a node for a singly linked list. It contains an
 * integer value, an index indicating its position in the list, and a
 * pointer to the next node in the list.
 */
typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

/**
 * struct skiplist_s - Singly linked list node structure with an express lane.
 * *********************************
 * @n: Integer stored at the node.
 * *********************************
 * @index: Index of the node in the list.
 * *********************************
 * @next: Pointer to the next node.
 * @express: Pointer to the next node in the express lane.
 *
 * Description:
 * This structure defines a node for a singly linked list with an express lane.
 * It contains an integer value, an index indicating its position in the list,
 * a pointer to the next node in the regular lane, and a pointer to the next
 * node in the express lane.
 */
typedef struct skiplist_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct skiplist_s *next;    /* Pointer to the next node. */
    struct skiplist_s *express; /* Pointer to the next node in the express lane. */
} skiplist_t;

int interpolation_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void free_skiplist(skiplist_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
