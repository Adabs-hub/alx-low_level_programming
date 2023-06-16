#include "lists.h"

/**
 * sum_dlistint - sum of all data in list
 * @head: head pointer
 * Return: sum all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
