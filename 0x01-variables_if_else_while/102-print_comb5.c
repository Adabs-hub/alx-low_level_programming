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
	int j = '0';
	int k = '0';
	int l = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				while(l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
				l = '0';
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
	putchar('\n');
	return (0);
}
