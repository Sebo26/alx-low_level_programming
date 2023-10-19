#include "lists.h"

/**
 * list_len - The function returns the number of elements in a
 * linked list_t list.
 * @h: The pointer to the elements of the linked list.
 * Return: Number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
size_t elements = 0;
	while (h)
	{
		h = h->next;
		elements++;
	}
return (elements);
}
