#include "main.h"

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
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}

