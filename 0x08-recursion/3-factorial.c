#include "main.h"

/**
 * factorial - frint factoial of integer
 *@n: - Integer parameter
 *
 *Return: 0
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
