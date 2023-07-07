#include "hash_tables.h"

/**
 * key_index - findes the index of a key
 * @key: key of value
 * @size: size of the hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	if (key == NULL)
		return (0);

	hash = hash_djb2(key) % size;

	return (hash);
}
