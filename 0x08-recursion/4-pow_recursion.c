#include "main.h"

/**
 * _pow_recursion -power using recursion
 *
 *@x: power of y
 *@y: power of the number
 *Return: power of result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}

