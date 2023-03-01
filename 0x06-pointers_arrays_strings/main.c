#include "main.h"
#include <stdio.h>

/**
 * _strlen - find string len
 *
 * @s: input string
 *
 * Return: string size
 */

int _strlen(char *s)
{
	char c = s[0];
	int size = 0;

	while (c != '\0')
	{
		size++;
		c = s[size];
	}
	return (size);
}

/**
 * _strcat - concatenates two strings
 *
 * @dest: 1st arg - destination string
 *
 * @src: 2nd arg - source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_sz = 0, src_sz = 0;

	dest_sz = _strlen(dest);
	src_sz = _strlen(src);
	dest[dest_sz] = ' ';
	dest_sz++;
	while(i < src_sz)
	{
		dest[dest_sz] = src[i];
		i++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}

int main(void)
{
	char s1[98] = "Hello";
	char s2[] = "world!\n";

	char *ptr;
	ptr = _strcat(s1, s2);
	printf("Ptr_ %s", ptr);
	return (0);
}
