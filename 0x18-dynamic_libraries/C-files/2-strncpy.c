#include "main.h"
#include <string.h>

/**
*_strncpy - Function for stracat
* @dest: - programs first param
* @src: - Second param
* @n: third param
* Return: return a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
