#include "lists.h"

/**
 * add_nodeint - add node to begining of list
 * @head: linked list
 * @n: data to add to node
 * Return: new head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
