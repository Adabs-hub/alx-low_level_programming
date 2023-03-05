#include "main.h"

/**
 * _strstr - search string for any set of byte
 *
 * @haystack: source string
 *
 * @needle: prefix substring
 *
 * Return: pointer to the byte in haystack that
 * matches one of the bytes in needle
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;
	char *first_byte = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] == haystack[i + j])
		{
			if (first_byte == 0)
				first_byte = (haystack + i);
			if (needle[j + 1] == '\0')
				return (first_byte);
			j++;
		}
		first_byte = 0;
		i++;
		j = 0;

	}
	return (0);
}
