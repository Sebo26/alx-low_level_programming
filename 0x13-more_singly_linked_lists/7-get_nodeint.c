#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - The function returns the nth node of
 * a listint_t linked list.
 * @head: pointer to listint_t linked list.
 * @index: the index of the node, starting at 0
 * Return: NULL (if node doesn't exist) or nth node of list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head != NULL)
{
	if (count == index)
	{
		return (head);
	}
	head = head->next;
	count++;
}
return (NULL);
}
