#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - The function inserts a new node at
 * a given position.
 * @head: Pointer to pointer of listint_t
 * @idx: index of the list where the new node should be added, index start at 0
 * @n: The new node that will be added.
 * Return:address of the new node, or NULL if it failed or if idx is impossible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;
if (idx == 0)
{
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

for (i = 0; current != NULL && i < idx - 1; i++)
{
	current = current->next;
}

if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
