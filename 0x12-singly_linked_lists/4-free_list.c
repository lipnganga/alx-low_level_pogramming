#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: beginning of the list to free
 * Return: nothng
 */

void free_list(list_t *head)
{
	list_t *temp;

		while(head != NULL)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
}
