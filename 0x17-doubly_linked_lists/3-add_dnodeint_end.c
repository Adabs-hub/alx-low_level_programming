#include "lists.h"

/**
 * add_dnodeint_end - add node to end of d-list
 * @head: head pointer d-list
 * @n: value of new node
 * Return: address to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n, new->prev = NULL, new->next = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	else
		*head = new;
	return (new);
}
