#include "lists.h"

/**
 * free_listp2 - frees a linked listp2 list
 * @head: start of a list.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((tmp = new) != NULL)
		{
			new = new->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of listint_safe list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t newnodes = 0;
	listp_t *hptr, *nnew, *added;
	listint_t *nnew;

	hptr = NULL;
	while (*h != NULL)
	{
		nnew = malloc(sizeof(listp_t));

		if (nnew == NULL)
			exit(98);

		nnew->p = (void *)*h;
		nnew->next = hptr;
		hptr = nnew;

		added = hptr;

		while (added->next != NULL)
		{
			added = added->next;
			if (*h == added->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (newnodes);
			}
		}

		new = *h;
		*h = (*h)->next;
		free(new);
		newnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
