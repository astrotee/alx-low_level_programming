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
	hash_node_t **node, *lnode, *tmp;

	if (ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = &ht->array[index];

	lnode = *node;
	while (lnode)
	{
		if (lnode->key && strcmp(lnode->key, key) == 0)
		{
			free(lnode->value);
			lnode->value = strdup(value);
			if (lnode->value == NULL)
				return (0);
			return (1);
		}
		lnode = lnode->next;
	}
	tmp = *node;
	*node = malloc(sizeof(hash_node_t));
	if (*node == NULL)
		return (0);
	(*node)->key = strdup(key);
	if ((*node)->key == NULL)
	{
		free(*node);
		return (0);
	}
	(*node)->value = strdup(value);
	if ((*node)->value == NULL)
	{
		free((*node)->key);
		free(*node);
		return (0);
	}
	(*node)->next = tmp;
	return (1);
}
