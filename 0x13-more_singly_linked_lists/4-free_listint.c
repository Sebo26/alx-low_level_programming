#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - The function frees a listint_t list.
 * @head: The pointer to listint_t list.
 */
void free_listint(listint_t *head)
{
listint_t *curr;
while (head != NULL)
{
	curr = head;
	head = head->next;
	free(curr);
}
}
