#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *string_nconcat - two  string concatenation
 *
 *@s1: first string
 *@s2: second string
 *@n: number of bytes to include of @s2
 *Return: new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i = 0;
	int j = 0;
	int k = 0;
	int m, p, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;
	len = i + j;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		concat[k++] = s1[p];
	for (m = 0; m < j; m++)
		concat[k++] = s2[m];

	concat[k] = '\0';
	return (concat);

}
