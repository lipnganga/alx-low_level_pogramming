#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: beginning of the list to free
 * Return: nothng
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
