#include "main.h"

/**
 * _isalpha - main Entry
 *
 * @c: is an integer charater
 *
 * Description: tells if character is lower or upper case
 *
 * Return: one for lower, zero for upper
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >=65 && <=90))
		return (1);
	else
		return (0);
}
