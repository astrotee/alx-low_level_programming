#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node at the start of a linked list
 * @head: double pointer to the linked list
 * @str: str to add in the node
 * Return: the address of the new start
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlinkedlist;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlinkedlist = malloc(sizeof(list_t));
	if (!newlinkedlist)
		return (NULL);

	newlinkedlist->str = strdup(str);
	newlinkedlist->len = len;
	newlinkedlist->next = (*head);
	(*head) = newlinkedlist;

	return (*head);
}
