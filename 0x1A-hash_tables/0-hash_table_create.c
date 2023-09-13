#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_hush;
	unsigned long int j;

	hash_hush = malloc(sizeof(hash_table_t));
	if (hash_hush == NULL)
		return (NULL);
	hash_hush->size = size;
	hash_hush->array = malloc(size * sizeof(hash_node_t *));
	if (hash_hush->array == NULL)
	{
		free(hash_hush);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		hash_hush->array[j] = NULL;
	return (hash_hush);
}
