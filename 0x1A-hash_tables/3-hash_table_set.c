#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: a hash_table
 * @key: the string like key
 * @value: a value
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = 0, pos = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *actual = NULL;

	new_node = malloc(sizeof(hash_node_t));

	if (!ht)
		return (0);

	if (!new_node)
		return (0);

	if (!key || !*key)
	{
		free(new_node);
		return (0);
	}
	size = ht->size;
	pos = key_index((unsigned char *)key, size);
	actual = ht->array[pos];
	
	while (actual)
	{
		if (strcmp(actual->key, key) == 0)
		{
			if (actual->value == NULL)
				return (0);

			free(new_node);
			free(actual->value);
			actual->value = strdup(value);
			return (1);
		}
		actual = actual->next;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
		return (0);
	new_node->next = ht->array[pos];
	ht->array[pos] = new_node;
	return (1);
}
