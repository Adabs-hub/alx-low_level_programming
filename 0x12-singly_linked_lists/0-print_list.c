#include "lists.h"


/**
 * print_number - prints integers numbers
 *
 * @n: inter to print to console
 *
 * Return nothin
 */

void print_number(size_t n)
{
	size_t num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_node - print string
 * @str: source string
 * @len: length
 * Return: length on success
 */

void print_node(char *str, size_t len)
{
	int i = 0;

	_putchar('[');
	print_number(len);
	_putchar(']');
	_putchar(' ');
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_list - print linked list
 * @h: linked list
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t list_len = 0;
	char *nil = "(nil)";

	if (h == NULL)
	{
		exit(98);
		return (-1);
	}
	do {
		if (h->str == NULL)
			print_node(nil, 0);
		else
			print_node(h->str, h->len);
		list_len++;
		h = h->next;
	} while (h != 0);

	return (list_len);
}
