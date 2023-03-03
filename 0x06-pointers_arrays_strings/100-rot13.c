#include "main.h"

/**
 * rot13 - selective charaters to int
 *
 * @str: source string
 *
 * Return: modified char
 */

char *rot13(char *str)
{
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		while (j < 52)
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
