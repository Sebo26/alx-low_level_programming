#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - The function prints all the elements of a listint_t list.
 * @h: Pointer to the elements of listint_t list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	node++;
}
return (node);
}
