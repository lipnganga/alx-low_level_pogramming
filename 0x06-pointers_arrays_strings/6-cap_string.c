#include "main.h"
#include <string.h>

/**
* cap_string - Function for capitalising
* @j: -  first param
* Return: capitalized string
*/
char *cap_string(char *j)
{
	char spc[] = {32, 9, '\n',  ';', '.', '!', '?', '"', '(', ')', '{', '}', };
	int len = 13;
	int a = 0, i;

	while (j[a])
	{
	i = 0;
	while (i < len)
	{
		if ((a == 0 || j[a - 1] == spc[i]) && (j[a] >= 97 && j[a] <= 122))
		j[a] = j[a] - 32;
		i++;
	}
	a++;
	}
	return (j);
}

