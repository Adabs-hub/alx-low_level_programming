#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - print string len
 *
 * @s: first argument. source string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int size = 1;

	if (*s == '\0')
		return (size - 1);
	return (size += _strlen_recursion(s + 1));
}

/**
 * rev_string - reverse string
 *
 * @rvsd_str: 1st arg
 * @s: 2nd arg
 * @size: 3rd arg
 * Return: nothing
 */

void rev_string(char *rvsd_str, char *s, int size)
{
	if (*s == '\0')
		return;
	*(rvsd_str + size - 1) = *s;
	rev_string(rvsd_str, s + 1, size - 1);
}

/**
 * _str_compare - compare two strings
 *
 * @str: first string
 *
 * @s: second string
 *
 * Return: 1 if matched and 0 otherwise
 */

int _str_compare(char *str, char *s)
{
	int i = 0;

	if (*s == '\0')
		return (1);
	if (*s != *str)
		return (0);
	else
		return (i += _str_compare(str + 1, s + 1));
}

/**
 * is_palindrome - check if char read the same in reverse
 *
 * @s: source char
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	char str[100] = {'\0'};
	int size = _strlen_recursion(s);

	rev_string(str, s, size);
	return (_str_compare(str, s));
}

