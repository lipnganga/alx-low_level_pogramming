#include "lists.h"

/**
 * listint_len - Counts the numbers of elements in the list
 *@h: the list to check
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (0)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

