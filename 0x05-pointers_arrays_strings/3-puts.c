#include "main.h"

/**
* _puts-> A function that puts
*@str: a parameter to _puts function
*Return: returns _puts
*/
void _puts(char *str);
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
