#include "lists.h"

/**
 * print_dlistint - is a function that prints the elements of a
 * doubly linked list.
 * @h: pointer to the element that will be printed
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
	printf("%d\n", h->n);
	h = h->next;
}
return (i);
}
