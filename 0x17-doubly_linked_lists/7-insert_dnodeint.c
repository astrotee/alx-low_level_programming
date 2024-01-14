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
	new->prev = NULL;
	new->next = current;
	if (current == NULL)
	{
		if (idx != 0)
		{
			free(new);
			return (NULL);
		}
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		current->prev = new;
		*h = new;
		return (new);
	}
	for (i = 1; i < idx && current->next; i++, current = current->next)
		;
	if (idx != 0 && i != idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	return (new);
}
