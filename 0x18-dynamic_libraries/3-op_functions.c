#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second numner
 * Return: sum of two numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subract b from a
 * @a: first number
 * @b: second number
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multply a by b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 * Return: a/b
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of a divide by b
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
