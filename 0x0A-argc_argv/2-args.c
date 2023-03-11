#include <stdio.h>

/**
 * main - main entry
 *
 * @argc: arg count
 *
 * @argv: arguments string vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
