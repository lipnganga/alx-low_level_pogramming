#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @s: the strig whose length is to be returned
 * Return: the lenth of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of the node
 * @str: string to add
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = _strlen(str);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}

