#include <stdio.h>
/**
 * main - main entry
 *
 * Description: compute the sum 5 and 3 multiples
 *
 * Return: zero on success
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		printf("%d \n", sum);
	
	return (0);
}
