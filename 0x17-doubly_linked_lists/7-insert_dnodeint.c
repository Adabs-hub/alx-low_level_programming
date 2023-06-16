#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at giving index of d-list
 * @h: head pointer d-list
 * @idx: index to add node
 * @n: value of new node
 * Return: address to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL, *head = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n, new->prev = NULL, new->next = NULL;
	head = *h;
	if ((*h) != NULL)
	{
		while (head->next != NULL)
		{
			if (count == idx)
			{
				tmp = head->prev;
				head->prev = new;
				new->next = head;
				tmp->next = new;
				new->prev = tmp;
				return (new);
			}
			head = head->next;
			count++;
		}
	}

	return (NULL);
}
