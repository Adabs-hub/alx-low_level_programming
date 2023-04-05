#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 * @head: address of linked list
 * @index: index of node to delete from
 * Return:1 on success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);

	return (1);
}
