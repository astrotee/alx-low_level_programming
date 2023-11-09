#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to the linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
