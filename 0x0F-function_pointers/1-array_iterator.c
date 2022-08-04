#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - used to execute function given as a param
 *@array: array being passed
 *@size: size of array
 *@action: pointer to function
 *Return: Nothing
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i = 0;
		void (*p)(int);

		p = action;

		if (!array || !action)
			return;

		for (i = 0; i < size; i++)
			p(array[i]);
}
