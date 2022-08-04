#include "function_pointers.h"

/**
 *int_index - searches for an  integer
 *@array: array to search through
 *@size: is the number of elements in the array array
 *@cmp: is a pointer to the function to be used to compare values
 *Return: the index of the first element for which the cmp function
 *does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
