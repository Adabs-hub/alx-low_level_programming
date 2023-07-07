#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the empty hash table
 * Return: pointer to new hash tabel
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;

	if (size > 0)
	{
		h_table = malloc(sizeof(hash_table_t));
		if (h_table == NULL)
		{
			free(h_table);
			return (NULL);
		}
		h_table->size = size;
		h_table->array = NULL;
	}

	return (h_table);
}
