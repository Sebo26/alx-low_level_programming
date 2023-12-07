#include "lists.h"

/**
 * print_dlistint - is a function that prints the elements of a
 * doubly linked list.
 * @h: pointer to the element that will be printed
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *curr = h;
size_t i;
i = 0;
while (curr != NULL)
{
	printf("%d\n", curr->n);
	curr = curr->next;
	i++;
}
return(i)
}
