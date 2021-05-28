#include "hash_tables.h"

/**
 * hash_table_delete - delete a table
 * @ht: hash_table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *actual, *tmp;
	unsigned int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			actual = ht->array[i];
			while (actual)
			{
				tmp = actual;
				free(actual->key);
				free(actual->value);
				actual = actual->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
