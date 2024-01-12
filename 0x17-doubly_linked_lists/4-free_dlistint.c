#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - free all node of a list
* @head: head pointer
* Return: NONE
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = head;

	while (next)
	{
		next = current->next;
		free(current);
	}
}
