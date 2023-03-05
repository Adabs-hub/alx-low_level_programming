#include "main.h"

/**
 * _strpbrk - search string for any set of byte
 *
 * @s: source string
 *
 * @accept: prefix substring
 *
 * Return: pointer to the byte in s that
 * matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	char *first_byte = NULL;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				if (first_byte == 0 || first_byte < &s[i])
					first_byte = (s + i);
				return (first_byte);
			}
			j++
		}
		i++;
		j = 0;
	}
	return (0);
}
