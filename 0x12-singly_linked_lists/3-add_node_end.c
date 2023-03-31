#include "lists.h"
#include <string.h>


/**
 * _strlen - calculate lenght of strings
 *
 * @s: source string arg
 *
 * Return: size of string arg char*
 */

int _strlen(const char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	return (size);
}


/**
 * add_node_end - add node to head
 * @h: pointer to pointer to a list
 * @str: string data
 * Return: pointer to string
 */

list_t *add_node_end(list_t **h, const char *str)
{
	list_t *tmp = 0;
	list_t *node_end = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;
	if (*h == NULL)
		*h = tmp;
	else
	{
		node_end = *h;
		while (node_end->next != NULL)
			node_end = node_end->next;
		node_end->next = tmp;
	}

	return (tmp);
}
