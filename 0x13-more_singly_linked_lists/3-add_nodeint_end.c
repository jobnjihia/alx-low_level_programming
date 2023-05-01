#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @n: data added to new node
 * @head: start of the list
 * Return: address of new node, NULl if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *temp = *head;

	added = malloc(sizeof(listint_t));
	if (!added)
		return (NULL);
	added->n = n;
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
