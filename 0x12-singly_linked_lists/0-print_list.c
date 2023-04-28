#include "lists.h"
#include <stdio.h>

/*
 * print_list - prints all the elements of a list_t list
 * @h: A pointer to the list_t for print
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->str)
			printf("[0]" (nil)\n);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
