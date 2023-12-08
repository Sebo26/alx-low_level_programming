#include "lists.h"

/**
 * insert_dnodeint_at_index - The function inserts a new node at
 * a given position.
 * @h: The pointer to the pointer of the list.
 * @idx: The index where the node will be inserted.
 * @n: The data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
for (i = 0; h != NULL; i++)
{
	if (i == idx)
	{
		new_node = malloc(sizeof(n));
		h = h->next;
		new_node->next = h
		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
}

