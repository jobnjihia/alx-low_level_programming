#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: begining of linked list
 * @index: location of node deleted
 * Return: 1 (success) else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *former;
	listint_t *next;

	former = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && former != NULL; j++)
		{
			former = former->next;
		}
	}

	if (former == NULL || (former->next == NULL && index != 0))
	{
		return (-1);
	}

	next = former->next;

	if (index != 0)
	{
		former->next = next->next;
		free(next);
	}
	else
	{
		free(former);
		*head = next;
	}

	return (1);
}
