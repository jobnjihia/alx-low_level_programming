#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: beginging of listint_t
 * @idx: index of the list where the new node should be added starting at 0
 * @n: data added in inserted node
 * Return: address of the inserted node else Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *added;
	listint_t *tmp = *head;

	added = malloc(sizeof(listint_t));
	if (!added || !head)
		return (NULL);

	added->n = n;

	if (idx == 0)
	{
		added->next = *head;
		*head = added;
		return (added);
	}

	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
		added->next = tmp->next;
		tmp->next = added;
		return (added);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
