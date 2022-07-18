#include "main.h"
#include <string.h>

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
	unsigned int i = 0, int j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + 1);
	}
	return (0);
}

