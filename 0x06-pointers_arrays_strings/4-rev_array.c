#include "main.h"
#include <string.h>

/**
* reverse_array - Function for reversing array
* @a: - programs first param
* @n: - Second param
* Return: reverse array
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
		for (k = 0; k < i / 2; k++)
		{
			aux = a[k];
			a[k] = *p;
			*p = aux;
			p--;
		}
}
