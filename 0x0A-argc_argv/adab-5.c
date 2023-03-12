#include <stdio.h>
#include <stdlib.h>

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
	int i = 0, n_coins = 0, change;
	int coins[] = {25, 10, 5, 2, 1};

	change = atoi(argv[argc - 1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (change != 0)
	{
		if (change >= coins[i])
		{
			n_coins += (change / coins[i]);
			change = (change % coins[i]);
		}
		i++;
	}
	printf("%d\n", n_coins);

	return (0);
}
