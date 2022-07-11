#include "main.h"

/**
* _strlen - A function to get length of string
*@s: string pointer to pass function
*Return: returns length of string
*/
int _strlen(char *s)
{
	int len:

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
