#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - the function adds a new node at the beginning of a list_t list.
 * @head: Stores the position of the head where the new node will be added.
 * @str: The node that will be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
size_t i = 0;
list_t *add;
unsigned int len = 0;
while (*head == NULL)
{
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	else
	{
	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;
	}
	--i;
}
return (*head);
}
