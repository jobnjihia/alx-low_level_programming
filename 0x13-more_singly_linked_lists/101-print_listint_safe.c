#include "lists.h"

/**
 * loop_listint_len - counts no. of nodes
 * @head: Begining of the list
 * Return: if list not looped - 0 else 98
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hump, *here;
        size_t added = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	hump = head->next;
	here = (head->next)->next;

	while (hump)
	{
		if (hump == here)
		{
			hump = head;
			while (hump != here)
			{
				added++;
				hump = hump->next;
				here= here->next;
			}

			hump = hump->next;

			while (hump != here)
				{
					added++;
					hump = hump->next;
				}

			return (added);
		}
		hump = hump->next;
		here = (here->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints listint_t
 * @head: pointer to the head of a list
 * Return: total nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nonode, index = 0;

	nonode = looped_listint_len(head);

	if (nonode == 0)
	{
		for (;head!= NULL; nonode++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nonode; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nonode);
}
