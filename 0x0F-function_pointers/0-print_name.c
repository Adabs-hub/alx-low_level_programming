#include "function_pointers.h"

/**
 * print_name - print function with a given name
 *@name: name to print
 *@f: function to print name
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != null)
		f(name);
}
