#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node -  adds a new node at the beginning of a list
 * @head: head of list_t list
 * @str: new string added to node
 * Return: address of new element, NULL incase it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	unsigned int len = 0;

	while (str[len])
		len++;

	added = malloc(sizeof(list_t));
	if (!added)
		return (NULL);

	added->str = strdup(str);
	added->len = len;
	added->next = (*head);
	(*head) = added;

	return (*head);
}
