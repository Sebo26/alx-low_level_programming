#include "lists.h"

/**
 * add_dnodeint_end - the function adds a new node at the end of the list.
 * @head: a pointer to the pointer of the last node.
 * @n: The new node that will be added.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *curr = *head;
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}
while (curr->next != NULL)
{
	curr = curr->next;
}
curr->next = new_node;
new_node->prev = curr;
return (new_node);
}
