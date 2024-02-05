#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_place - place a node in its ordered place
 * @ht: the hash table
 * @node: the node
 * Return: Nothing
 */
void shash_table_place(shash_table_t *ht, shash_node_t **node)
{
	shash_node_t *tmp;

	tmp = ht->shead;
	if (tmp == NULL)
	{
		ht->shead = ht->stail = *node;
		(*node)->snext = (*node)->sprev = NULL;
		return;
	}
	while (tmp && strcmp(tmp->key, (*node)->key) < 0)
		tmp = tmp->snext;
	(*node)->snext = tmp;
	if (tmp == NULL)
	{
		(*node)->sprev = ht->stail;
		ht->stail->snext = *node;
		ht->stail = *node;
	}
	else
	{
		if (tmp->sprev)
			tmp->sprev->snext = *node;
		else
			ht->shead = *node;
		(*node)->sprev = tmp->sprev;
		tmp->sprev = *node;
	}
}

/**
* shash_table_create - create a sorted hash table
* @size: the size of the table
* Return: a pointer to the created array
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (size && new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

/**
* shash_table_set - set an element in a sorted hash table
* @ht: the hash table
* @key: the key of the element
* @value: the value of the element
* Return: 1 on success, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	shash_node_t **node, *lnode, *tmp;

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
	*node = malloc(sizeof(shash_node_t));
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
	shash_table_place(ht, node);
	return (1);
}
/**
* shash_table_get - set an element in a sorted hash table by key
* @ht: the hash table
* @key: the key used to lookup the element
* Return: the value of the element if found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long index;
	shash_node_t *node;

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
/**
* shash_table_print - print sorted hash table
* @ht: the hash table
* Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	int sep = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;

	printf("{");
	while (node)
	{
		if (sep)
			printf(", ");
		else
			sep = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}
/**
* shash_table_print_rev - print sorted hash table in reverse
* @ht: the hash table
* Return: Nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	int sep = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;

	printf("{");
	while (node)
	{
		if (sep)
			printf(", ");
		else
			sep = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
* shash_table_delete - delete a sorted hash table
* @ht: the hash table
* Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = ht->shead;

	while (node)
	{
		tmp = node;
		node = node->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

	free(ht->array);
	free(ht);
}

