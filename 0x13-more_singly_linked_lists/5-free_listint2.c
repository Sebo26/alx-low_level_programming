#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - The function frees a listint_t list and sets head to NULL.
 * @head: Pointer to pointer of listint_t list.
 */
void free_listint2(listint_t **head)
{
listint_t *curr;
while (head != NULL)
{
	curr = *head;
	*head = (*head)->next;
	free(curr);
}
}
