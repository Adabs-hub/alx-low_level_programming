#include "lists.h"

/**
 * list_len - print linked list len
 * @h: linked list
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}
