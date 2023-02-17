#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'positive anything is better than negative nothing'
  *
  * Return: zero on success
  */
int main(void)
{
	int i = 48;
	int max = 9 + 48;

	while (i <= max)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
