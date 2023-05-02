#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: The head of a list
 * Return: total nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t tnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tnodes++;
	}
	return (tnodes);
}
