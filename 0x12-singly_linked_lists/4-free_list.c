#include "lists.h"
#include <stdlib.h>

/**
 * free_list - The function frees a list_t list.
 * @head: The pointer to the first element in list_t.
 */
void free_list(list_t *head)
{
list_t *out;
while (head != NULL)
{
	out = head;
	head = head->next;
	free(head->str);
	free(head);
	head = out;
}
}
