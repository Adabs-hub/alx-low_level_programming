#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_s *array = NULL, *tmp = NULL;

	index = key_index(key, ht->size);
	if (ht == NULL || index == -1)
		return (0);

	tmp = malloc(sizeof(hash_node_s));
	if (tmp == NULL)
	{
		free(tmp);
		return (0);
	}

	tmp->key = NULL;
	tmp->value = NULL;
	tmp->next = NULL;

	strcpy(tmp->value, value);
	strcpy(tmp->key, key);
	array = ht->array[index];
	if (array == NULL)
	{
		ht->array[index] = tmp;
	}
	else
	{
		array = array->next;
		while (array->next != NULL)
			array = array->next;
		array = tmp;

	}

	return (1);
}
