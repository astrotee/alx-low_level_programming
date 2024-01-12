#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - return node at index
* @head: head pointer
* @index: the index
* Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i = 0;

	for (current = head; current && i < index; current = current->next, i++)
		;

	return (i == index ? current : NULL);
}
