#include "lists.h"

/**
 * print_dlistint - is a function that prints the elements of a
 * doubly linked list.
 * h: pointer to the element that will be printed
 * return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int i;
i = 0;
while (curr != NULL)
{
	printf("%d", curr -> n);
	curr = curr -> next;
	i++;
}
return(i)
}
