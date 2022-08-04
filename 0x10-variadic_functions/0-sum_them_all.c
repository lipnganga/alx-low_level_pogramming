#include "variadic_functions.h"
#include <starg.h>
/**
 *sum_them_all - sum of all parameters
 *
 *@n: parameter 1 
 *Return: Nothing
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}

