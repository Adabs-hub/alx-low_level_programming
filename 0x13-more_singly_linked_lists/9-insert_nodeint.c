#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: address of linked list
 * @idx: index position to insert
 * @n: value of new node
 * Return: sum of node data. 0 if list is empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
