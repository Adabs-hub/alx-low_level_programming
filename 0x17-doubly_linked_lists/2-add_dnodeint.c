#include "lists.h"

/**
 * add_dnodeint - add node to end of d-list
 * @head: head pointer d-list
 * @n: value of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n, new->prev = NULL, new->next = NULL;
	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
