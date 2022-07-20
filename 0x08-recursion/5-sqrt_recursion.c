#include "main.h"

/**
 * _sqrt_recursion - function to square a string  in recursion
 *
 *@n: - integer to be squared
 *Return: Square result
 */

int _sqrt_recursion(int n)
{
		if (n == '\0')
			return (0);
		return (sqrt(n, 1));
}

int _sqrt(int a, int b);
/**
 *sqrt - finds square root of two numbers
 *
 *@a: the number
 *@b: number to tesst square root
 *
 * Return: square root
 */

int _sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (sqrt(a, b + 1));
	return (1);
}
