#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - calculate the sum of dlist
* @head: head pointer
* Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
