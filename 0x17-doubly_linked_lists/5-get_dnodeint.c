#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer address
 * @index: index to retrieve
 * Return: pointer node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
