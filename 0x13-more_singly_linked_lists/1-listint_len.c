#include "lists.h"

/**
 * listint_len - Prints the number of elements in a linked listint_t
 * @h: The head of the list
 *
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
