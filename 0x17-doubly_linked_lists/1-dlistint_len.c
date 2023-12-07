#include "lists.h"
/**
 * dlistint_len - is a function that returns the number of elements of a
 * doubly linked list.
 * @h: pointer to the element that will be counted
 * Return: The number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
	h = h->next;
}
return (i);
}
