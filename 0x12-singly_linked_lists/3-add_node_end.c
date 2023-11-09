#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the linked list
 * @str: string to put in the end node
 * Return: address of the new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ll;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_ll = malloc(sizeof(list_t));
	if (!new_ll)
		return (NULL);

	new_ll->str = strdup(str);
	new_ll->next = NULL;
	new_ll->len = len;

	if (*head == NULL)
	{
		*head = new_ll;
		return (new_ll);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_ll;

	return (new_ll);
}
