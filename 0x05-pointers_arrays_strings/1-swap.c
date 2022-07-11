#include "main.h"

/**
*swap_int -given tow integers swap valus they are holding
*@a: value 1
*@b: value 2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


