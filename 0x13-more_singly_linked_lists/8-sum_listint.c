#include "lists.h"

/**
 * sum_listint - sum all values in a linked list
 * @head: linked list
 * Return: sum of node data. 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		if (head->next == NULL)
			break;
		head = head->next;
	}

	return (sum);
}
