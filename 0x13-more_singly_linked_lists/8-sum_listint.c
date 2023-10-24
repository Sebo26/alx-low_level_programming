#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - The function returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to list.
 * Return: NULL (if node doesn't exist) or sum of all the data.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
	sum = sum + head->n;
	head = head->next;
}
return (sum);
}
