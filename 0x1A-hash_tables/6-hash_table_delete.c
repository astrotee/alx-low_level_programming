#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* hash_table_delete - delete hash table
* @ht: the hash table
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	int size, i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		while (node->next)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(node->key);
		free(node->value);
		free(node);
	}
	free(ht->array);
	free(ht);
}

