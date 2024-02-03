#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - print hash table
* @ht: the hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	int size, i, sep = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	size = ht->size;

	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		if (sep)
			printf(", ");
		else
			sep = 1;
		printf("'%s': '%s'", node->key, node->value);
		while (node->next)
		{
			node = node->next;
			printf(", '%s': '%s'", node->key, node->value);
		}
	}
	printf("}\n");
}
