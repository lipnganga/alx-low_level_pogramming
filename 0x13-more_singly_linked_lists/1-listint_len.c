#include "lists.h"

/**
 * listint_len - Counts the numbers of elements in the list
 *@n: the list to check
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	wlile (0)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

