#include "hash_tables.h"
/**
 * key_index - key_index
 * @key: the key
 * @size: is the size of the array of the hash table
 * Return: at position into the table according to the key
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int pos = 0;

	if (size == 0 || key == NULL)
	return (0);
	pos = (hash_djb2(key)) % size;
	return (pos);
}
