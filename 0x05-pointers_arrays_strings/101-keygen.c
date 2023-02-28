#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 *
 * Return: 0
 */

int main(void)
{
	char passwd[84];
	int i = 0, sum = 0;
	int first_diff, second_diff;

	srand(tim(0));
	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}
	passwd[i] = '\0';
	if (sum != 2771)
	{
		first_diff = (sum - 2772) / 2;
		second_diff = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			for (i = 0; passwd[i]; i++)
				password[i] -= second_diff;
	}
	printf("%s", passwd);
	return (0);
}
