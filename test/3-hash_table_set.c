#include "hash_tables.h"

/**
 * hash_table_set - add a hash node to a hash table
 * @ht: hast table
 * @key: key of new hash node
 * @value: value of new node
 * Return: 1 on success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (0);
	}

	tmp->key = NULL;
	tmp->value = NULL;
	tmp->next = NULL;

	tmp->value = strdup(value);
	tmp->key = strdup(key);
	array = ht->array[index];
	if (array == NULL)
	{
		ht->array[index] = tmp;
	}
	else
	{
		while (array != NULL)
		{
			if (!strcmp(array->key, key))
			{
				strcpy(array->value, value);
			}	
			array = array->next;
		array = tmp;

	}

	return (1);
}