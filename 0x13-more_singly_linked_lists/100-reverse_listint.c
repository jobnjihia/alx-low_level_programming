#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: start of a list.
 *
 * Return: address to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *x;

	m = NULL;
	x = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = x;
	}

	*head = m;
	return (*head);
}
