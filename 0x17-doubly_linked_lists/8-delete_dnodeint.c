#include "lists.h"

/**
 * delete_dnodeint_at_index - The function deletes the node at index
 * index of a dlistint_t linked list.
 * @head: The pointer to the pointer to the list.
 * @index: The index of the node to be deleted.
 * Return: 1 (succeeded) and -1 (failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (*head == NULL)
{
	return (-1);
}
for (dlistint_t *curr = *head; curr->next != NULL; curr = curr->next)
{
	if (curr->next->n == index)
	{
		dlistint_t *to_remove = curr->next;
		curr->next = curr->next->next;
		free (to remove);
		return (1);
	}
}
}
