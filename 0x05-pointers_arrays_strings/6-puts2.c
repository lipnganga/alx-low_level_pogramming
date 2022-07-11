#include "main.h"
#include <string.h>

/**
*puts2 -> puts2 function
*@str: str param
*/
void puts2(char *str)
{
	int len;

	len = strlen(str);
	for (x = 0; x < len; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}
