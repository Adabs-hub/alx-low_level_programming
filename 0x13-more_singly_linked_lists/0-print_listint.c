#include "lists.h"

/**
 * print_listint - print integer
 * @h: linked list
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		list_len++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (list_len);
}
