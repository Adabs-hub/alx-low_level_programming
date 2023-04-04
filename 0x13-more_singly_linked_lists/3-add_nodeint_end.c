#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: linked list
 * @n: data to add to node
 * Return: new head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = NULL, *last_node = NULL;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;
	last_node = *head;
	if (*head != NULL)
	{
		while (*head != NULL)
		{
			if (last_node->next == NULL)
				break;
			last_node = last_node->next;
		}
		last_node->next = tmp;
	}
	else
		*head = tmp;
	return (*head);
}
