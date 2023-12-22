#include "hash_tables.h"

/**
 * hash_table_print - The function prints a hash table.
 * @ht: The hash table that will be printed
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current;
if (ht == NULL)
{
}
for (i = 0; i < ht->size; ++i)
{
	current = ht->array[i];
	while (current != NULL)
	{
		printf("%s, %s", current->key, current->value);
		if (current->next != NULL)
		{
			printf(", ");
		}
		current = current->next;
	}
}
printf("}");
}
