#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - get the size of the list
* @h: head pointer
* Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
