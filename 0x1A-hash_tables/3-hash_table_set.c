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
	unsigned long int size = ht->size;
	unsigned long int pos = key_index((unsigned char *)key, size);
	hash_node_t *new_node = NULL;
	hash_node_t *actual = ht->array[pos];

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	if (!key || !*key)
	{
		free(new_node);
		return (0);
	}

	while (actual)
	{
		if (strcmp(actual->key, key) == 0)
		{
			if (actual->value == NULL)
				return (0);

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
