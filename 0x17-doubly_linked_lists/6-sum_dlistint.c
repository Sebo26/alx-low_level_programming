#include "lists.h"

/**
 * sum_dlistint - The function sums all the data of the dlist.
 * @head: pointer to the head of the list.
 * Return: 0 if empty or the sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int i;
int sum;
sum = 0;
for (i = 0; head != NULL; i++)
{
	sum = sum + head->n;
	head = head->next;
}
return (sum);
}
