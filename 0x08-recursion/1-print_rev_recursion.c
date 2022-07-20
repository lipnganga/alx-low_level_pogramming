#include "main.h"

/**
 *_print_rev_recursion - functio to print string in reverse recursively
 *
 *@s: - first parameter of string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
