#include "main.h"

/**
 * _memcpy - Function that copies area
 * @dest: - dest to copy the memory to
 * @n: - number of bytes
 * @src: - memory area to copy from
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);


}
