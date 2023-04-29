#include "lists.h"

/*
 * *add_node_end - adds a node at the end of a linked list
 * @head: begining of linked list
 * @str: string added at the end
 * Return: address of new element and NULL if function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	added = malloc(sizeof(list_t));
	if (!added)
		return (NULL);

	added->str = strdup(str);
	added->len = len;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = added;

	return (added);
}
