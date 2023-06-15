#include "lists.h"

/**
 * add_dnodeint - add node to end of d-list
 * @head: head pointer d-list
 * @n: value of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(new));
	if (!new)
	{
		free(new)
		return (NULL);
	}
	new = {NULL, n, NULL}
	if (*head)
	{
		new->next = *head;
		*head->prev = new;
	}
	return (new);
}
