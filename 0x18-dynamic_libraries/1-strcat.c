#include "main.h"
#include <string.h>

/**
*_strncat - Function for strncat
* @dest: - programs first param
* @src: - Second param
* @n: third param
* Return: return a string
*/
char *_strcat(char *dest, char *src)
{

	strncat(dest, src);
	return (dest);
}
