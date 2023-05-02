#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: first place of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (head == NULL)
		return;

	while (*head)
	{
		freedom = (*head)->next;
		free(*head);
		*head = freedom;
	}
	*head = NULL;
}
