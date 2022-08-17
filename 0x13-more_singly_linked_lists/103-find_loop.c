#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bonny, *clide;

	bonny = clide = head;
	while (bonny && clide && clide->next)
	{
		bonny = bonny->next;
		bonny = clide->next->next;
		if (bonny == clide)
		{
			bonny = head;
			break;
		}
	}
	if (!bonny || !clide || !clide->next)
		return (NULL);
	while (bonny != clide)
	{
		bonny = clide->next;
		clide = clide->next;
	}
	return (clide);
}
