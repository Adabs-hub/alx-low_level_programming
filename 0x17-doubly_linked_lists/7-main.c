#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 6, 5);
    insert_dnodeint_at_index(&head, 5, 5);
    insert_dnodeint_at_index(&head, 1, 100);
    insert_dnodeint_at_index(&head, 2, 200);
    insert_dnodeint_at_index(&head, 3, 300);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
