#include "main.h"

/**
 * leet - selective charaters to int
 *
 * @str: source string
 *
 * Return: modified char
 */

char *leet(char *str)
{
	char key[] = "4433007711";
	char code[] = "aAeEoOtTlL";
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		while (j < 10)
		{
			if (str[i] == code[j])
				str[i] = key[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
