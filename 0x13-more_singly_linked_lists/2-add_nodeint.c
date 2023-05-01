#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @n: Data added to new node
 * @head: pointer to first node
 * Return: pointer to new node, NULL incase of fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));

	if (added == NULL)
	return (NULL);

	added->n = n;
	added->next = *head;
	*head = added;

	return (*head);
}
