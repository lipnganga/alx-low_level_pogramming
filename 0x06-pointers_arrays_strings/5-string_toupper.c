#include "main.h"
#include <string.h>

/**
* string_toupper - Function for convertiing any string to upper case
* @j: - string param
* Return: string
*/
char *string_toupper(char *j)
{
	int i = 0;

	while (j[i])
	{
		if (j[i] >= 97 && j[i] <= 122)
			j[i] = j[i] - 32;
		i++;
	}
	return (j);
}
