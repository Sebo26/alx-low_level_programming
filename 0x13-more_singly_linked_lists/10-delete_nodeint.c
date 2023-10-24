#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - The function deletes the node at index index of a
 * listint_t linked list.
 * @head: Pointer to the pointer of listint_t linked list.
 * @index: The index of the node that should be deleted, it start at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *to_remove = *head;
listint_t *curr = *head;
if (*head == NULL)
{
	return (-1);
}

for (curr = *head; curr->next == index; curr = curr->next)
{
	if (curr->next->n = n)
	{
		*head = (*head)->next;
		free(to_remove);
	}
}
return (1);
}
