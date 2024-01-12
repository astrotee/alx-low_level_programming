#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - add a node at the beginning of the list
* @head: head pointer
* @n: the value of the new node
* Return: pointer to the new node or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
