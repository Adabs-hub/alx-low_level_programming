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
	listint_t *next_node = NULL, *previous_node = NULL, *tmp = NULL;
	unsigned int i = 0;

	/*return null if head node is empty*/
	if (head == NULL)
		return (NULL);

	/*allocate memory for new node*/
	tmp  = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	/*asing value to new node*/
	tmp->n = n;

	/*assign next node to current head*/
	next_node = *head;
	for (i = 0; i < idx; i++)
	{
		if (next_node->next == NULL)
			break;
		previous_node = next_node;
		next_node = next_node->next;
	}

	/*insert new node between next and previous nodes*/
	tmp->next = next_node;
	if (previous_node != NULL)
		previous_node->next = tmp;

	return (tmp);
}
