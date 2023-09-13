#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hashtable to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *head, *next;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (n = 0; n < ht->size; n++)
	{
		head = ht->array[n];
		while (head != NULL)
		{
			next = head->next;
			if (head->key != NULL)
				free(head->key);
			if (head->value != NULL)
				free(head->value);
			free(head);
			head = next;
		}
	}
	free(ht->array);
	free(ht);
}
