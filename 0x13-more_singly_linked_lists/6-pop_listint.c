#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - The function deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer of the list.
 * Return: 0(if list is empty)
 */
int pop_listint(listint_t **head)
{
int data = (*head)->n;
listint_t *to_remove = *head;
if (*head == NULL)
{
	return (0);
}

*head = (*head)->next;
free(to_remove);
return (data);
}
