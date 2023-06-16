#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: head pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
