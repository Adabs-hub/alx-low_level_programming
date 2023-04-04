#include "lists.h"

/**
 * get_nodeint_at_index - ged node index
 * @head: linked list
 * @index: nth position
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = NULL;
	unsigned int i = 0;

	/*return null if head node is empty*/
	if (head == NULL)
		return (NULL);

	nth_node = head;
	for (i = 0; i < index; i++)
	{
		if (nth_node->next == NULL)
			return (NULL);
		nth_node = nth_node->next;
	}

	return (nth_node);
}
