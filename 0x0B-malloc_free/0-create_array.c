#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: Array size
 * @c: storage character
 * Return: A pointer to an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *sr;
	unsigned int i;

	if (size == 0)
		return (0);

	sr = malloc(sizeof(c) *size);

	if (sr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sr[i] = c;

	return (sr);
}
