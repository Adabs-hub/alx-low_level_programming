#include "main.h"
#include <stdlib.h>

/**
 * _strlen - to fine string len
 *
 * @str: string
 *
 * Return: length on success
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concatatenate terminal argument to string
 *
 * @ac: first string
 *
 * @av: second string
 *
 * Return: NULL on failure and pointer to location in memory on success
 */

char *argstostr(int ac, char **av)
{
	char *buffer = 0;
	int i = 0, j = 0, k = 0, len = 0;

	if (ac == 0 && av == 0)
		return (0);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	buffer = (char *)malloc(sizeof(char) *	(len + ac + 1));
	if (buffer == 0)
	{
		free(buffer);
		return (0);
	}
	i = 0;
	while (i < len + ac)
	{
		while (av[j][k] != '\0')
		{
			buffer[i] = av[j][k];
			k++;
			i++;
		}
		buffer[i] = '\n';
		i++;
		j++;
		k = 0;
	}
	return (buffer);
}
