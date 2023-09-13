#include "hash_tables.h"

/**
 * key_index - Get index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: key which the index is being found.
 * @size: size of the array of the hash table.
 *
 * Return: index of the key.
 *
 * Description: Usage of the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
