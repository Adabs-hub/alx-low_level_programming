#include "3-calc.h"
#include <stdio.h>

/**
 * main - main entry
 * @argc: number of arg
 * @argv: command line strings array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int (*cal)(int, int);

	if (argc != 4 || argv[2][2] == '\0')
	{
		printf("Error\n");
		exit(98);
	}

	cal = get_op_func(argv[2]);

	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 || atoi(argv[1]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", cal(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
