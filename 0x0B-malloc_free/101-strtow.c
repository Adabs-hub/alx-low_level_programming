#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * _wordslen - count words in string
 *
 * @str: source string
 *
 * Return: word length
 */

int _wordslen(char *str)
{
	int i = 0, word = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
			word++;
		i++;
	}
	return (word);
}


/**
 * strtow - splits string into words
 *
 * @str: string
 *
 * Return: Null on failure pointer to pointer to array of words
 */

char **strtow(char *str)
{
	char **wrd_arr;
	int len, words, i = 0, j = 0, ch_count = 0, k = 0;

	if (str == 0 || str[0] == '\0')
		return (0);
	len = _strlen(str);
	words = _wordslen(str);
	if (words == 0)
	{
		printf("failed\n");
		return (0);
	}
	wrd_arr = (char **)malloc(sizeof(char *) * words);
	if (!wrd_arr)
	{
		free(wrd_arr);
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		while (str[ch_count + i] != ' ' && str[ch_count + i + 1] != '\0')
			ch_count++;
		wrd_arr[k] = (char *)malloc(sizeof(char) * ch_count + 1);
		for (j = 0; j < ch_count; j++)
		{
			wrd_arr[k][j] = str[i];
			i++;
		}
		wrd_arr[k][j] = '\0';
		k++;
		ch_count = 0;

	}
	return (wrd_arr);
}

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("Talk is cheap. Show me the code.");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}