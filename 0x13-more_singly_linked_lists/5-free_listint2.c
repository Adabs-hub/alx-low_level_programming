#include "lists.h"

/**
 * free_listint2 - free linked list
 * @h: linked list
 * Return: nothing
 */

void free_listint2(listint_t **h)
{
	listint_t *p = NULL;

	while (h != NULL)
	{
		p = (*h)->next;
		free(*h);
		if (p == NULL)
		{
			*h = p;
			break;
		}
		*h = p;
	}
}
