#include "main.h"
#include <string.h>

/**
*puts_half -> Half function
*@str: str param
*/
void puts_half(char *str)
{
	int i, j, z;

	i = strlen(str);
	if  (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;
	for (z = j; z < i; z++)
		_putchar(str[z]);
	_putchar('\n');
}
