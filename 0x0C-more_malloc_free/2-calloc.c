#include "main.h"

/**
 *_calloc - allocates memory for an array of elements
 *
 *@nmemb: parameter 1
 *@size: parameter 2
 *Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *nem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nem = malloc(size * nmemb);
	if (nem == NULL)
		return (NULL);
	filler = nem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (nem);
}
