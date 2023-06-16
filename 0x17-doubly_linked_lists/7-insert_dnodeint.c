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
	dlistint_t *head = NULL;
	unsigned int size = 0;

	head = *h;
	for (size = 0; head != NULL; size++)
		head = head->next;

	if (size == 1)
		head = add_dnodeint(h, n);
	else if (size > 1 && idx < size)
		head = insert_inbetween_node(h, idx, n);
	else if (size == idx)
		head = add_dnodeint_end(h, n);
	else
		return (NULL);

	return (head);
}
/**
 * insert_inbetween_node - add node inbetween first and last node
 * @h: head pointer d-list
 * @idx: index to add node
 * @n: value of new node
 * Return: address to new node
 */

dlistint_t *insert_inbetween_node(dlistint_t **h,
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
