#include "main.h"

/**
*rev_string -> reverse string
*@s: value s
*/
void rev_string(char *s)
{
	char tmp;
	int x, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (x = 0; x < length1 / 2; x++)
	{
		tmp = s[x];
		s[x] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
