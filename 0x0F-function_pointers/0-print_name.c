#include "function_pointers.h"

/**
 * print_name - Function that  prints a name
 * @name: name to print out
 * @f: function to send the name to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name = NULL || f = NULL)
		return;
	f(name);
}
