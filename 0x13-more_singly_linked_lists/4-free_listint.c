#include "lists.h"

/**
 * free_listint - free linked list
 * @h: linked list
 * Return: nothing
 */

void free_listint(listint_t *h)
{
	listint_t *p = NULL;

	while (h != NULL)
	{
		p = h->next;
		free(h);
		if (p == NULL)
			break;
		h = p;
	}
}
