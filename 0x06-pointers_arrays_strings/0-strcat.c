#include "main.h"

/**
* _strcat - Function for stracat
* @dest: - programs first param
* @src: - Second param 
* Return: return a string
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, y;

	while (dest[len])
		len++;

	for (y = 0; src[y] != 0; y++)
	{
	dest[len] = src[y];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);

}
