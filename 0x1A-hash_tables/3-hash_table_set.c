#include "hash_tables.h"
/**
 * hash_table_set - updates or adds an element to hasg table .
 * @ht: pointer to a hash table.
 * @key: key added, can be an empty string.
 * @value: value added that is associated with the key.
 *
 * Return: 1 on success else 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ky_index;
	hash_node_t *temp;
	char *updated_value;


	if (!ht || !key || strcmp(key, "") == 0 || !value || !ht->array)
	return (0);

	ky_index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ky_index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			updated_value = strdup(value);
			if (!updated_value)
				return (0);
			free(temp->value);
			temp->value = updated_value;
			return (1);
		}
		temp = temp->next;
	}
	temp = ht->array[ky_index];
	ht->array[ky_index] = malloc(sizeof(hash_node_t));
	if (!ht->array[ky_index])
	{
		ht->array[ky_index] = temp;
		return (0);
	}
	ht->array[ky_index]->key = strdup(key);
	ht->array[ky_index]->value = strdup(value);
	ht->array[ky_index]->next = temp;
	return (1);
}
