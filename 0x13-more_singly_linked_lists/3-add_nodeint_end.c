#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - The function adds a new node at the end of
 * a listint_t list.
 * @head: The pointer to listint_t list.
 * @n: The values in listint_t list.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}

listint_t *curr = *head;

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
}

while (curr->next != NULL)
{
	curr = curr->next;
}
curr->next = new_node;
return (new_node);
}
