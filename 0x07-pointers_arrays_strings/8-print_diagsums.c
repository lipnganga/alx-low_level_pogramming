#include "main.h"
#include <string.h>

/**
 *print_diagsums - print sum of two diagonals os square matrix
 *@a: the name of array
 *@size: size of array
 *Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
