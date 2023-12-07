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
if (new_node == NULL)
{
	return (NULL);
}
new_node->next = NULL;
new_node->n = n;

if(*head == NULL)
{
	return (NULL);
}
*dlistint curr = *head;
return (new_node)
}
