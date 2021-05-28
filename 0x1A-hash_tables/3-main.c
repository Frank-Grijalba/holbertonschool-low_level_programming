#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	

	ht = hash_table_create(1024);
	char *s = "hetairas";
	unsigned long int index = key_index((unsigned char *)s, 1024);
	
	printf("%s is in index:%lu\n", s, index);
	hash_table_set(ht, "hetairas", "num1");
	hash_table_set(ht, "mentioner", "num2");
	char *c = "heliotropes";
	unsigned long int index1 = key_index((unsigned char *)c, 1024);
	printf("%s is in index:%lu\n", c, index1);

	hash_table_set(ht, "heliotropes", "num3");
	printf("%s ", ht->array[787]->key);
	printf("%s \n", ht->array[787]->value);

	hash_table_set(ht, "neurospora", "num4");
	printf("%s ", ht->array[787]->key);
	printf("%s \n", ht->array[787]->value);

	
	return (EXIT_SUCCESS);
}
