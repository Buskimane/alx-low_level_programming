#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	current_node = current_node->next;
	while (current_node)
	{
		i++;
		if (i == idx)
		{
			new_node = malloc(1 * sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->prev = current_node->prev;
			new_node->prev->next = new_node;
			new_node->next = current_node;
			new_node->n = n;
			current_node->prev = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}

	if (idx - i == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
