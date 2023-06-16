#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at giving index of d-list
 * @h: head pointer d-list
 * @idx: index to add node
 * @n: value of new node
 * Return: address to new node
 */

dlistint_t *insert_dnodeint_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL, *h = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n, new->prev = NULL, new->next = NULL;
	h = *head
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			if (count == idx)
			{
				tmp = h->prev;
				h->prev = new;
				new->next = h;
				tmp->next = new;
				new->prev = tmp;
				return (new);
			}
			h = h->next;
		}
	}

	return (NULL);
}
