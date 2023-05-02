#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: start of the linked list
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (j);
}
