#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - set an element in the hash table by key
* @ht: the hash table
* @key: the key used to lookup the element
* Return: the value of the element if found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node->key && strcmp(node->key, key) != 0)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}

	return (node->value);
}
