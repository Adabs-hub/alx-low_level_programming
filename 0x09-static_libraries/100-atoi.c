#include "main.h"

/**
 * _atoi - convert char to int
 *
 * @s: char value
 *
 * Return: converted int
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0;
	int n = 0;
	int min = 1;

	while (s[i])
	{
		if (s[i] == 45)
			min *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			n = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (n == 1)
			break;
		i++;
	}
	result *= min;
	return (result);
}
