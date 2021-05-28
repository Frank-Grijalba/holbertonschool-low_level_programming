#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: a hash_table
 * @key: the string like key
 * Return: the value of the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = ht->size;
	unsigned long int pos = key_index((unsigned char *)key, size);
	hash_node_t *actual = ht->array[pos];

	while (actual)
	{
		if (strcmp(actual->key, key) == 0)
		{
			return (actual->value);
		}
		actual = actual->next;
	}

	return (NULL);
}
