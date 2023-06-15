#include "lists.h"

/**
 * dlistint_len - find doubly linked list len
 * @h: head pointer of arg linked list
 * Return: lenght of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_node = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		n_node++;
	}

	return (n_node);
}
