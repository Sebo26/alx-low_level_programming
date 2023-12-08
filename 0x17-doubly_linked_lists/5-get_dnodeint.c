#include "lists.h"

/**
 * get_dnodeint_at_index - The function return the nth node of the dlist
 * @head: pointer to the nth node
 * @index: the index of the node
 * Return: the nth node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head != NULL; i++)
{
	if (i == index)
	{
		return (head);
	}
	head = head->next;
}
return (NULL);
}
