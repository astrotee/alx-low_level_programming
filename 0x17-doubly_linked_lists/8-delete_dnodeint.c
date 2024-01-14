#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - delete a node by index
* @head: head pointer
* @index: the index
* Return: 1 on success and -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);
	for (i = 1; i < index && current->next; i++, current = current->next)
		;
	if (index && index != i)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	else
		 *head = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
