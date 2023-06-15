#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: head pointer of arg linked list
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%d\n",h->n);
		h = h->next;
		n_node++;
	}

	return (n_node);
}
