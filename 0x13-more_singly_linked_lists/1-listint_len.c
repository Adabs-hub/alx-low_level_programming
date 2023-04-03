#include "lists.h"

/**
 * listint_len - list length of a linked list
 * @h: linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (len);
}
