#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*function definitions*/
	int _putchar(char c);
	size_t print_list(const list_t *h);
	void print_number(size_t n);
	void print_node(char *str, size_t len);

#endif /*list.h*/
