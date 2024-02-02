#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - create a hash table
* @size: the size of the table
* Return: a pointer to the created array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *nodes_array;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	nodes_array = malloc(sizeof(hash_node_t) * size);
	if (size && nodes_array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = &nodes_array;
	return (new_table);
}
