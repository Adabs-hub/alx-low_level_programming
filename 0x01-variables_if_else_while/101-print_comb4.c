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
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = i + 2;
	}
	putchar('\n');
	return (0);
}
