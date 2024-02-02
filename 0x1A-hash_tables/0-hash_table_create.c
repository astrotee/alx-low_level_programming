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

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (size && new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
