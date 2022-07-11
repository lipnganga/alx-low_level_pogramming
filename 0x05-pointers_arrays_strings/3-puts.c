#include "main.h"

/**
* _puts-> A function that puts
*@str: a parameter to _puts function
*Return: returns _puts
*/
void _puts(char *str);
{
while (*str != '\0')
{

	_putchar(*str);
	str++;
	}
	_putchar('\n');
}


