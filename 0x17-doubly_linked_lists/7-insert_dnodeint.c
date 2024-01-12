#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insert a note at index
* @h: head pointer
* @idx: the index
* @n: the value of the node
* Return: the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i < idx && current->next; i++, current = current->next)
		;
	if (i != idx)
	{
		free(new);
		return (NULL);
	}
	new->prev = current->prev;
	new->next = current;
	if (current->prev)
		current->prev->next = new;
	current->prev = new;
	if (*h == NULL || idx == 0)
		*h = new;

	return (new);
}
