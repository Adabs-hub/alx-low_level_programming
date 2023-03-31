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
 * add_node - add node to head
 * @h: pointer to pointer to a list
 * @str: string data
 * Return: pointer to string
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *tmp = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	if (*h == NULL)
		tmp->next = NULL;
	else
		tmp->next = *h;
	*h = tmp;

	return (tmp);
}
