#include "main.h"
#include <string.h>

/**
*_strncat - Function for strncat
* @dest: - programs first param
* @src: - Second param
* @n: third param
* Return: return a string
*/
char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
