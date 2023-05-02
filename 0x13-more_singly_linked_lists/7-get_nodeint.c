#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of listint_t
 * @head: start of the linked list
 * @index: index at 0 of node to be located
 * Return: located node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
