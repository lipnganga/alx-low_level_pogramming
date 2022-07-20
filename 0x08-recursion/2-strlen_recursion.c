#include "main.h"
#include <string.h>

/**
 *_strlen_recursion - Print the length of strings
 *
 *@s: First param value
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
