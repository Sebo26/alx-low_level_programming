#include "hash_tables.h"

/**
 * hash_table_set - The function adds an element to the hash table.
 * @ht: hash table to add or update the key/value
 * @key: the key
 * @value: value associated with the key, duplicated and can be empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
if (ht == NULL || key == NULL || value == NULL)
{       
	return (0);
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
        free(new_node);
        return 0;
}
new_node->value = strdup(value);

if (new_node->value == NULL)
{
	free(new_node->key);
	free(new_node);
	return 0;
}
return (1);
}
