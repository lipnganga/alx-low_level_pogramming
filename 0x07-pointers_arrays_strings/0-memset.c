#include "main.h"

/**
 * _memset -Function that fills memory with a constant byte.
 *
 * @n: - first bytes of memory area
 * @s: -ponter to memory area
 * @b: - constant byte
 *
 * Return: return pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
