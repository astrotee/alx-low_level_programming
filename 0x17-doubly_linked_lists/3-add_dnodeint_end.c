#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - add a node at the end of the list
* @head: head pointer
* @n: the value of the new node
* Return: pointer to the new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (tail && tail->next)
		tail = tail->next;
	if (tail)
		tail->next = new;
	if (*head == NULL)
		*head = new;
	new->prev = tail;

	return (new);
}
