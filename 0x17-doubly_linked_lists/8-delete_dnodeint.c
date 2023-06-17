#include "lists.h"
/**
 * delete_dnodeint_at_index - get node at index
 * @head: head pointer address
 * @index: index to retrieve
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *h = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	while (head != NULL)
	{
		if (count == index && h->next != NULL)
		{
			if (h->next != NULL)
			{
				tmp = h->prev;
				tmp->next = h->next;
				(h->next)->prev = tmp;
				free(h);
			}
			else
			{
				tmp = h->prev;
				free(h);
				tmp->next = NULL;
			}
			return (1);
		}
		h = h->next;
		count++;
	}

	return (-1);
}
