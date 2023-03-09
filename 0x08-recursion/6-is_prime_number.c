#include "main.h"

/**
 * divisors - check if number has two factors only
 *
 * @n: first param
 *
 * @m: second param
 *
 * Return: prime
 */

int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - main prime func
 *
 * @n: number check if it's prime
 *
 * Return: 0 if not prime and 1 other wise
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}
