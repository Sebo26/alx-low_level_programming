#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - The function returns the number of elements in a
 * linked listint_t list.
 * @h: The elements in the linked list.
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t count;
while (h != NULL)
{
	count++;
	h = h->next;
}

return (count);
}
