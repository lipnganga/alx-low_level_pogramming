#include "main.h"

/**
 *_strchr - locates a character in a string
 *@c: - character
 *@s: - string to check
 *Return: Return a pointer to the first occurence of the character c .
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
