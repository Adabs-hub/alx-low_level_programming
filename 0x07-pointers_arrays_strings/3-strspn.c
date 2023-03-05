#include "main.h"

/**
 * _strspn - get length of prefix substring
 *
 * @s: source string
 *
 * @accept: prefix substring
 *
 * Return: number of byte in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, byte_len = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if(s[i] == accept[j])
			{
				byte_len++;
				break;
			}
			else
				return (byte_len);
		}
		i++;
		j = 0;
	}
	return (byte_len);
}
