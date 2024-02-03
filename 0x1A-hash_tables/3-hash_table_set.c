#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - set an element in the hash table
* @ht: the hash table
* @key: the key of the element
* @value: the value of the element
* Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t **node, *tmp;

	index = key_index((unsigned char *)key, ht->size);
	node = &ht->array[index];

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;
	if (*node && (*node)->key && strcmp((*node)->key, key) != 0)
		tmp->next = *node;
	*node = tmp;
	return (1);
}
