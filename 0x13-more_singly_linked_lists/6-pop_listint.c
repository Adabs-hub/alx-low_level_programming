#include "lists.h"

/**
 * pop_listint - remove head node
 * @head: address of list
 * Return: head node data and zero on failure
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	/*return if list is empty*/
	if ((*head) == NULL)
		return (data);

	/*save head node data*/
	data = (*head)->n;
	/*save next node*/
	tmp = (*head)->next;
	/*free head node*/
	free(*head);
	/*save next node to head node*/
	*head = tmp;

	return (data);
}
