#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j;
	char *str;

	if (ht == NULL)
		return;

	printf("{");
	str = "";

	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node != NULL)
		{
			printf("%s'%s: '%s'", str, node->key, node->value);
			str = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
