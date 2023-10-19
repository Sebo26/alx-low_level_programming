#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - The function adds a new node at the end of a list_t list.
 * @head: The address where the node will be added.
 * @str: The node that will be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = strlen(str);
	if (*head == NULL)
	{
		return (add);
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = add;
	}
return (*head);
}
