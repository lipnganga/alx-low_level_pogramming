#include "main.h"
#include <string.h>

/**
 * _strpbrk - Locates the first occurence of a string
 * @s: - string to search for
 * @accept: - the bytes to dearch for
 * Return: - pointer to the byte in s that matches bytes in accept/NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)

	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
