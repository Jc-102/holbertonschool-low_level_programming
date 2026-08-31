#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: the index where the new node should be added
 * @n: the value to store in the new node
 *
 * Return: the address of the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *b;
	dlistint_t *a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	b = get_dnodeint_at_index(*h, idx);

	if (b == NULL)
	{
		if (idx == dlistint_len(*h))
			return (add_dnodeint_end(h, n));
		return (NULL);
	}

	a = b->prev;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = b;
	new_node->prev = a;
	a->next = new_node;
	b->prev = new_node;

	return (new_node);
}
