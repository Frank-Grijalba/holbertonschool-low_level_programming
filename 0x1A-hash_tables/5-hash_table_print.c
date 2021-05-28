#include "hash_tables.h"
/**
 * hash_table_print - a function that that prints a hash table..
 * @ht: a hash_table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *actual = NULL;
	int fnd = 0;
	unsigned int i = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			actual = ht->array[i];

			while (actual)
			{
				if (fnd)
					printf(", ");
				printf("'%s': '%s'", actual->key, actual->value);
				fnd = 1;
				actual = actual->next;
			}
		}
	}
	printf("}\n");
}
