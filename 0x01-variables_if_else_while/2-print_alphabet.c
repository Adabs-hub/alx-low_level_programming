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
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
