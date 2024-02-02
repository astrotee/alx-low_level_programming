#include "hash_tables.h"

/**
* key_index - return an index in the size range using hash of the key
* @key: the key used to hash
* @size: the size of the table
* Return: the index;
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
