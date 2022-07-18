#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @needle: - First occurence of string
 * @haystack: - substring to search
 *
 * Return: - Returns a pointer to the beginning of the located substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int  j = 0;

	while (needle[s] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

