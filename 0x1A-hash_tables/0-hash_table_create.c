#include "hash_tables.h"

/**
 * hash_table_create - create a hash_table
 * @size: the size
 * Return: a hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
	return (NULL);

	new_table = malloc(sizeof(new_table));

	if (!new_table)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));

	if (!new_table->array)
	{
		free(new_table->array);
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
