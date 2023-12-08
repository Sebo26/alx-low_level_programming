#include "lists.h"

/**
 * free_dlistint - The function frees slistint_t list.
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
dlistint_t *next;
while (curr != NULL)
{
	next = curr->next;
	free(curr);
	curr = next;
}
}
